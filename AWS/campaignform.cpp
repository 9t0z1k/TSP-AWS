#include "campaignform.h"
#include "dialogcampaign.h"
#include "ui_campaignform.h"
#include <QTimer>

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

