#include "channelform.h"
#include "ui_channelform.h"
#include "dialogchannel.h"
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>
#include <QFileDialog>

channelForm::channelForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::channelForm)
{
    ui->setupUi(this);
}

channelForm::~channelForm()
{
    delete ui;
}

void channelForm::saveDataToXml(const QString& fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.setAutoFormatting(true);

        xmlWriter.writeStartDocument();
        xmlWriter.writeStartElement("ChannelData");

        xmlWriter.writeTextElement("Name", m_channel.getChName());
        xmlWriter.writeTextElement("Price", QString::number(m_channel.getChPrice()));
        xmlWriter.writeTextElement("Coverage", QString::number(m_channel.getCoverage()));

        xmlWriter.writeEndElement();
        xmlWriter.writeEndDocument();

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
    }
}

void channelForm::loadDataFromXml(const QString& fileName)
{
    QFile file(fileName);
    QString CD = "ChannelData";
    QString N = "Name";
    QString P = "Price";
    QString C = "Coverage";
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
                if (xmlReader.name() == CD)
                {
                    continue;
                }

                if (xmlReader.name() == N)
                {
                    xmlReader.readNext();
                    m_channel.setChName(xmlReader.text().toString());
                    ui->lineEdit->setText(xmlReader.text().toString());
                }
                else if (xmlReader.name() == P)
                {
                    xmlReader.readNext();
                    double price = xmlReader.text().toDouble();
                    m_channel.setChPrice(price);
                    ui->doubleSpinBox->setValue(price);
                }
                else if (xmlReader.name() == C)
                {
                    xmlReader.readNext();
                    int coverage = xmlReader.text().toInt();
                    m_channel.setCoverage(coverage);
                    ui->spinBox->setValue(coverage);
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

void channelForm::on_pushButton_clicked()
{
    DialogChannel* DC = new DialogChannel;
    DC->show();
    connect(DC, &DialogChannel::dataFilled, this, &channelForm::updateChannelData);
    ui->pushButton->hide();
}

void channelForm::updateChannelData(const QString& ch_name, double ch_price, int ch_coverage)
{
    m_channel.setChName(ch_name);
    m_channel.setChPrice(ch_price);
    m_channel.setCoverage(ch_coverage);

    ui->lineEdit->setText(ch_name);
    ui->doubleSpinBox->setValue(ch_price);
    ui->spinBox->setValue(ch_coverage);
}
void channelForm::on_pushButton_2_clicked()
{
    DialogChannel* DC = new DialogChannel(this);
    DC->setChannelData(m_channel.getChName(), m_channel.getChPrice(), m_channel.getCoverage());
    connect(DC, &DialogChannel::dataFilled, this, &channelForm::updateChannelData);
    DC->exec();
}



void channelForm::on_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        saveDataToXml(fileName);
    }
}


void channelForm::on_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Загрузить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        loadDataFromXml(fileName);
    }
}

