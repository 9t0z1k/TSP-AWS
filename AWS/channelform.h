#ifndef CHANNELFORM_H
#define CHANNELFORM_H

#include <QWidget>
#include "marketcampaign.h"

namespace Ui {
class channelForm;
}

class channelForm : public QWidget
{
    Q_OBJECT

public:
    explicit channelForm(QWidget *parent = nullptr);
    ~channelForm();
    void saveDataToXml(const QString& fileName);
    void loadDataFromXml(const QString& fileName);
private slots:
    void on_pushButton_clicked();
    void updateChannelData(const QString& ch_name, double ch_price, int ch_coverage);

    void on_pushButton_2_clicked();

    void on_save_clicked();

    void on_load_clicked();

private:
    Ui::channelForm *ui;
    MarketCampaign::Channel m_channel;
};

#endif // CHANNELFORM_H
