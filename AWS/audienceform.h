#ifndef AUDIENCEFORM_H
#define AUDIENCEFORM_H

#include <QWidget>
#include "marketcampaign.h"

namespace Ui {
class audienceForm;
}

class audienceForm : public QWidget
{
    Q_OBJECT

public:
    explicit audienceForm(QWidget *parent = nullptr);
    ~audienceForm();

    void saveDataToXml(const QString& fileName);

    void loadDataFromXml(const QString& fileName);
private slots:
    void on_pushButton_clicked();
    void updateAudienceData(const QString& a_place, int a_SMale, int a_SFemale, int a_age);

    void on_pushButton_2_clicked();

    void on_save_clicked();

    void on_load_clicked();

private:
    Ui::audienceForm *ui;
    MarketCampaign::Audience m_audience;
};

#endif // AUDIENCEFORM_H
