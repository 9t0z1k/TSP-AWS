#include "audienceform.h"
#include "ui_audienceform.h"
#include "dialogaudience.h"
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>
#include <QFileDialog>

audienceForm::audienceForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::audienceForm)
{
    ui->setupUi(this);
}

audienceForm::~audienceForm()
{
    delete ui;
}

void audienceForm::on_pushButton_clicked()
{
    DialogAudience* DA = new DialogAudience;
    DA->show();
    connect(DA, &DialogAudience::dataFilled, this, &audienceForm::updateAudienceData);
    ui->pushButton->hide();
}

void audienceForm::updateAudienceData(const QString& a_place, int a_SMale, int a_SFemale, int a_age)
{
    m_audience.setPlace(a_place);
    m_audience.setSMale(a_SMale);
    m_audience.setSFemale(a_SFemale);
    m_audience.setAge(a_age);

    ui->lineEdit->setText(a_place);
    ui->spinBox->setValue(a_SMale);
    ui->spinBox_2->setValue(a_SFemale);
    ui->spinBox_3->setValue(a_age);
}

void audienceForm::on_pushButton_2_clicked()
{
    DialogAudience* DA = new DialogAudience(this);
    DA->setAudienceData(m_audience.getPlace(), m_audience.getSMale(), m_audience.getSFemale(), m_audience.getAge());
    connect(DA, &DialogAudience::dataFilled, this, &audienceForm::updateAudienceData);
    DA->exec();
}

void audienceForm::saveDataToXml(const QString& fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.setAutoFormatting(true);

        xmlWriter.writeStartDocument();
        xmlWriter.writeStartElement("AudienceData");

        xmlWriter.writeTextElement("Place", m_audience.getPlace());
        xmlWriter.writeTextElement("SMale", QString::number(m_audience.getSMale()));
        xmlWriter.writeTextElement("SFemale", QString::number(m_audience.getSFemale()));
        xmlWriter.writeTextElement("Age", QString::number(m_audience.getAge()));

        xmlWriter.writeEndElement();
        xmlWriter.writeEndDocument();

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
    }
}

void audienceForm::loadDataFromXml(const QString& fileName)
{
    QFile file(fileName);
    QString AD = "AudienceData";
    QString P = "Place";
    QString M = "SMale";
    QString F = "SFemale";
    QString A = "Age";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader xmlReader(&file);

        while (!xmlReader.atEnd() && !xmlReader.hasError())
        {
            QXmlStreamReader::TokenType token = xmlReader.readNext();

            if (token == QXmlStreamReader::StartDocument)
            {
                continue;
            }

            if (token == QXmlStreamReader::StartElement)
            {
                if (xmlReader.name() == AD)
                {
                    continue;
                }

                if (xmlReader.name() == P)
                {
                    xmlReader.readNext();
                    m_audience.setPlace(xmlReader.text().toString());
                    ui->lineEdit->setText(xmlReader.text().toString());
                }
                else if (xmlReader.name() == M)
                {
                    xmlReader.readNext();
                    int sMale = xmlReader.text().toInt();
                    m_audience.setSMale(sMale);
                    ui->spinBox->setValue(sMale);
                }
                else if (xmlReader.name() == F)
                {
                    xmlReader.readNext();
                    int sFemale = xmlReader.text().toInt();
                    m_audience.setSFemale(sFemale);
                    ui->spinBox_2->setValue(sFemale);
                }
                else if (xmlReader.name() == A)
                {
                    xmlReader.readNext();
                    int age = xmlReader.text().toInt();
                    m_audience.setAge(age);
                    ui->spinBox_3->setValue(age);
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
void audienceForm::on_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        saveDataToXml(fileName);
    }
}


void audienceForm::on_load_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        saveDataToXml(fileName);
    }
}

