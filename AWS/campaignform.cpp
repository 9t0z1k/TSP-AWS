#include "campaignform.h"
#include "dialogcampaign.h"
#include "ui_campaignform.h"
#include <QTimer>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>
#include <QFileDialog>


CampaignForm::CampaignForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CampaignForm)
{
    ui->setupUi(this);
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &CampaignForm::updateProgressBar);
    m_timeLabel = new QLabel(this);
    m_timeLabel->setAlignment(Qt::AlignCenter);
    ui->verticalLayout->addWidget(m_timeLabel);
}

CampaignForm::~CampaignForm()
{
    delete ui;
}

void CampaignForm::on_pushButton_clicked()
{
    DialogCampaign *DC = new DialogCampaign;
    DC->show();
    connect(DC, &DialogCampaign::dataFilled, this, &CampaignForm::updateCampaignData);
    ui->pushButton->hide();
}

void CampaignForm::updateCampaignData(const QString mc_goal, double mc_budget, QDate mc_startDate, QDate mc_endDate)
{
    m_campaign.setGoal(mc_goal);
    m_campaign.setBudget(mc_budget);
    m_campaign.setStart(mc_startDate);
    m_campaign.setEnd(mc_endDate);

    ui->lineEdit->setText(mc_goal);
    ui->doubleSpinBox->setValue(mc_budget);
    ui->dateEdit->setDate(mc_startDate);
    ui->dateEdit_2->setDate(mc_endDate);

    m_startDateTime = QDateTime(m_campaign.getStart(), QTime(0, 0)); // Создание QDateTime для времени начала
    m_endDateTime = QDateTime(m_campaign.getEnd(), QTime(23, 59, 59)); // Создание QDateTime для времени окончания

    QDateTime currentDateTime = QDateTime::currentDateTime();
    int remainingSeconds = currentDateTime.secsTo(m_endDateTime);
    int totalSeconds = m_startDateTime.secsTo(m_endDateTime);

    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(totalSeconds);
    ui->progressBar->setValue(totalSeconds - remainingSeconds);

    m_timer->start(1000); // Запустите таймер с интервалом в 1 секунду
    int remainingDays = remainingSeconds / (60 * 60 * 24); // Рассчитываем оставшиеся дни
    int remainingHours = (remainingSeconds / (60 * 60)) % 24; // Рассчитываем оставшиеся часы
    int remainingMinutes = (remainingSeconds / 60) % 60; // Рассчитываем оставшиеся минуты

    QString remainingTime = QString("%1 д %2 ч %3 мин").arg(remainingDays).arg(remainingHours).arg(remainingMinutes);
    m_timeLabel->setText(remainingTime);

}

void CampaignForm::updateProgressBar()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    int remainingSeconds = currentDateTime.secsTo(m_endDateTime);
    int totalSeconds = m_startDateTime.secsTo(m_endDateTime);

    ui->progressBar->setValue(totalSeconds - remainingSeconds);

    if (remainingSeconds <= 0) {
        m_timer->stop(); // Останавливаем таймер, когда время истекло
    }
}
void CampaignForm::on_pushButton_2_clicked()
{
    DialogCampaign *DC = new DialogCampaign;
    DC->setCampaignData(m_campaign.getGoal(), m_campaign.getBudget(), m_campaign.getStart(), m_campaign.getEnd());
    connect(DC, &DialogCampaign::dataFilled, this, &CampaignForm::updateCampaignData);
    DC->exec();
}

void CampaignForm::saveDataToXml(const QString& fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.setAutoFormatting(true);
        xmlWriter.writeStartDocument();

        xmlWriter.writeStartElement("Campaign");

        xmlWriter.writeTextElement("Goal", m_campaign.getGoal());
        xmlWriter.writeTextElement("Budget", QString::number(m_campaign.getBudget()));
        xmlWriter.writeTextElement("StartDate", m_campaign.getStart().toString());
        xmlWriter.writeTextElement("EndDate", m_campaign.getEnd().toString());

        xmlWriter.writeEndElement(); // Закрываем элемент "Campaign"
        xmlWriter.writeEndDocument();

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
    }
}

void CampaignForm::loadDataFromXml(const QString& fileName)
{
    QFile file(fileName);
    QString C = "Campaign";
    QString G = "Goal";
    QString B = "Budget";
    QString SD = "StartDate";
    QString ED = "EndDate";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader xmlReader(&file);

        while (!xmlReader.atEnd() && !xmlReader.hasError())
        {
            xmlReader.readNext();

            if (xmlReader.isStartElement() && xmlReader.name() == C)
            {
                while (!(xmlReader.isEndElement() && xmlReader.name() == C))
                {
                    xmlReader.readNext();

                    if (xmlReader.isStartElement() && xmlReader.name() == G)
                    {
                        xmlReader.readNext();
                        QString goal = xmlReader.text().toString();
                        m_campaign.setGoal(goal);
                        ui->lineEdit->setText(goal);
                    }
                    else if (xmlReader.isStartElement() && xmlReader.name() == B)
                    {
                        xmlReader.readNext();
                        double budget = xmlReader.text().toDouble();
                        m_campaign.setBudget(budget);
                        ui->doubleSpinBox->setValue(budget);
                    }
                    else if (xmlReader.isStartElement() && xmlReader.name() == SD)
                    {
                        xmlReader.readNext();
                        QDate startDate = QDate::fromString(xmlReader.text().toString(), Qt::ISODate);
                        m_campaign.setStart(startDate);
                        ui->dateEdit->setDate(startDate);
                    }
                    else if (xmlReader.isStartElement() && xmlReader.name() == ED)
                    {
                        xmlReader.readNext();
                        QDate endDate = QDate::fromString(xmlReader.text().toString(), Qt::ISODate);
                        m_campaign.setEnd(endDate);
                        ui->dateEdit_2->setDate(endDate);
                    }
                }
            }
        }

        if (xmlReader.hasError())
        {
            qDebug() << "XML parsing error: " << xmlReader.errorString();
        }

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for reading.";
    }
}

void CampaignForm::on_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        saveDataToXml(fileName);
    }
}


void CampaignForm::on_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Загрузить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        loadDataFromXml(fileName);
    }
}

