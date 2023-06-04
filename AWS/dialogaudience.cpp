#include "dialogaudience.h"
#include "ui_dialogaudience.h"

DialogAudience::DialogAudience(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAudience),
    m_audience(nullptr)
{
    ui->setupUi(this);
}

DialogAudience::~DialogAudience()
{
    delete ui;
}

void DialogAudience::setAudienceData(const QString& a_place, int a_SMale, int a_SFemale, int a_age)
{
    ui->lineEdit_6->setText(a_place);
    ui->spinBox->setValue(a_SMale);
    ui->spinBox_2->setValue(a_SFemale);
    ui->spinBox_3->setValue(a_age);
}

void DialogAudience::setAudience(MarketCampaign::Audience *audience)
{
    m_audience = audience;
}

void DialogAudience::on_buttonBox_accepted()
{
    MarketCampaign::Audience *audience = nullptr;
    DialogAudience dialog(this);
    dialog.setAudience(audience);

    QString a_place = ui->lineEdit_6->text();
    int a_SMale = ui->spinBox->value();
    int a_SFemale = ui->spinBox_2->value();
    int a_age = ui->spinBox_3->value();

    if(m_audience != nullptr)
    {
        m_audience->setPlace(a_place);
        m_audience->setSMale(a_SMale);
        m_audience->setSFemale(a_SFemale);
        m_audience->setAge(a_age);
    }

    emit dataFilled(a_place, a_SMale, a_SFemale, a_age);
    delete audience;
    accept();
}

