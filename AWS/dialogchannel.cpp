#include "dialogchannel.h"
#include "ui_dialogchannel.h"

DialogChannel::DialogChannel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChannel),
    m_channel(nullptr)
{
    ui->setupUi(this);

}

DialogChannel::~DialogChannel()
{
    delete ui;
}

void DialogChannel::setChannelData(const QString& ch_name, double ch_price, int ch_coverage)
{
    ui->lineEdit->setText(ch_name);
    ui->doubleSpinBox->setValue(ch_price);
    ui->spinBox->setValue(ch_coverage);
}

void DialogChannel::setChannel(MarketCampaign::Channel *channel)
{
    m_channel = channel;
}

void DialogChannel::on_buttonBox_accepted()
{
    MarketCampaign::Channel *channel = nullptr;
    DialogChannel dialog(this);
    dialog.setChannel(channel);

    QString ch_name = ui->lineEdit->text();
    double ch_price = ui->doubleSpinBox->value();
    int ch_coverage = ui->spinBox->value();

    if (m_channel != nullptr)
    {
        m_channel->setChName(ch_name);
        m_channel->setChPrice(ch_price);
        m_channel->setCoverage(ch_coverage);
    }

    emit dataFilled(ch_name, ch_price, ch_coverage);
    delete channel;
    accept();
}

