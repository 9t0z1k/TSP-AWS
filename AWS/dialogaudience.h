#ifndef DIALOGAUDIENCE_H
#define DIALOGAUDIENCE_H

#include <QDialog>
#include "marketcampaign.h"

namespace Ui {
class DialogAudience;
}

class DialogAudience : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAudience(QWidget *parent = nullptr);
    ~DialogAudience();
    void setAudience(MarketCampaign::Audience *audience);
    void setAudienceData(const QString& a_place, int a_SMale, int a_SFemale, int a_age);

private slots:
    void on_buttonBox_accepted();
signals:
    void dataFilled(const QString& a_place, int a_SMale, int a_SFemale, int a_age);
private:
    Ui::DialogAudience *ui;
    MarketCampaign::Audience *m_audience;
};

#endif // DIALOGAUDIENCE_H
