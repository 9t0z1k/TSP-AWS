#ifndef CAMPAIGNFORM_H
#define CAMPAIGNFORM_H

#include <QWidget>
#include "marketcampaign.h"
#include "qlabel.h"

namespace Ui {
class CampaignForm;
}

class CampaignForm : public QWidget
{
    Q_OBJECT

public:
    explicit CampaignForm(QWidget *parent = nullptr);
    ~CampaignForm();

private slots:
    void on_pushButton_clicked();
    void updateCampaignData(const QString mc_goal, double mc_budget, QDate mc_startDate, QDate mc_endDate);
    void on_pushButton_2_clicked();
    void updateProgressBar();

private:
    Ui::CampaignForm *ui;
    MarketCampaign::Campaign m_campaign;
    QTimer* m_timer;
    QDateTime m_startDateTime;
    QDateTime m_endDateTime;
    QLabel* m_timeLabel;
};

#endif // CAMPAIGNFORM_H
