#ifndef DIALOGCAMPAIGN_H
#define DIALOGCAMPAIGN_H

#include <QDialog>
#include "marketcampaign.h"

namespace Ui {
class DialogCampaign;
}

class DialogCampaign : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCampaign(QWidget *parent = nullptr);
    ~DialogCampaign();
    void setCampaign(MarketCampaign::Campaign *m_campaign);
    void setCampaignData(const QString mc_goal, double mc_budget, QDate mc_startDate, QDate mc_endDate);

signals:
    void dataFilled(const QString mc_goal, double mc_budget, QDate mc_startDate, QDate mc_endDate);
private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogCampaign *ui;
    MarketCampaign::Campaign *m_campaign;
};

#endif // DIALOGCAMPAIGN_H
