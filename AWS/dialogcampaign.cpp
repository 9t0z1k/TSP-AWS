#include "dialogcampaign.h"
#include "ui_dialogcampaign.h"

DialogCampaign::DialogCampaign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCampaign),
    m_campaign(nullptr)
{
    ui->setupUi(this);
}

DialogCampaign::~DialogCampaign()
{
    delete ui;
}

void DialogCampaign::setCampaignData(const QString mc_goal, double mc_budget, QDate mc_startDate, QDate mc_endDate)
{
    ui->lineEdit->setText(mc_goal);
    ui->doubleSpinBox->setValue(mc_budget);
    ui->dateEdit->setDate(mc_startDate);
    ui->dateEdit_2->setDate(mc_endDate);
}

void DialogCampaign::setCampaign(MarketCampaign::Campaign *campaign)
{
    m_campaign = campaign;
}

void DialogCampaign::on_buttonBox_accepted()
{
    MarketCampaign::Campaign *campaign = nullptr;
    DialogCampaign dialog(this);
    dialog.setCampaign(campaign);

    QString mc_goal = ui->lineEdit->text();
    double mc_budget = ui->doubleSpinBox->value();
    QDate mc_startDate = ui->dateEdit->date();
    QDate mc_endDate = ui->dateEdit_2->date();

    if(m_campaign != nullptr)
    {
        m_campaign->setGoal(mc_goal);
        m_campaign->setBudget(mc_budget);
        m_campaign->setStart(mc_startDate);
        m_campaign->setEnd(mc_endDate);
    }

    emit dataFilled(mc_goal, mc_budget, mc_startDate, mc_endDate);
    delete campaign;
    accept();
}

