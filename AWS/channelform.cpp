#include "channelform.h"
#include "ui_channelform.h"
#include "dialogchannel.h"

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

