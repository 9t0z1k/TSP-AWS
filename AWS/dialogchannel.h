#ifndef DIALOGCHANNEL_H
#define DIALOGCHANNEL_H

#include <QDialog>
#include "addchanel.h"
#include "marketcampaign.h"

namespace Ui {
class DialogChannel;
}

class DialogChannel : public QDialog
{
    Q_OBJECT
    friend MainWindow;
    friend AddChanel;

public:
    explicit DialogChannel(QWidget *parent = nullptr);
    ~DialogChannel();
    void setChannel(MarketCampaign::Channel *channel);
    void setChannelData(const QString& ch_name, double ch_price, int ch_coverage);
private slots:
    void on_buttonBox_accepted();

signals:
    void dataFilled(const QString& ch_name, double ch_price, int ch_coverage);
private:
    Ui::DialogChannel *ui;
    MarketCampaign::Channel *m_channel;
};

#endif // DIALOGCHANNEL_H
