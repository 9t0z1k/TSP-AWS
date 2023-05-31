#include "audienceform.h"
#include "ui_audienceform.h"
#include "dialogaudience.h"

audienceForm::audienceForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::audienceForm)
{
    ui->setupUi(this);
}

audienceForm::~audienceForm()
{
    delete ui;
}

void audienceForm::on_pushButton_clicked()
{
    DialogAudience* DA = new DialogAudience;
    DA->show();
    connect(DA, &DialogAudience::dataFilled, this, &audienceForm::updateAudienceData);
    ui->pushButton->hide();
}

void audienceForm::updateAudienceData(const QString& a_place, int a_SMale, int a_SFemale, int a_age)
{
    m_audience.setPlace(a_place);
    m_audience.setSMale(a_SMale);
    m_audience.setSFemale(a_SFemale);
    m_audience.setAge(a_age);

    ui->lineEdit->setText(a_place);
    ui->spinBox->setValue(a_SMale);
    ui->spinBox_2->setValue(a_SFemale);
    ui->spinBox_3->setValue(a_age);
}

void audienceForm::on_pushButton_2_clicked()
{
    DialogAudience* DA = new DialogAudience(this);
    DA->setAudienceData(m_audience.getPlace(), m_audience.getSMale(), m_audience.getSFemale(), m_audience.getAge());
    connect(DA, &DialogAudience::dataFilled, this, &audienceForm::updateAudienceData);
    DA->exec();
}

