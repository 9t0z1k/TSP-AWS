#include "addbuttoncampaign.h"
#include "addproduct.h"
#include "addaudience.h"
#include "addchanel.h"
#include "ui_addbuttoncampaign.h"

addbuttoncampaign::addbuttoncampaign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addbuttoncampaign)
{
    ui->setupUi(this);
}

addbuttoncampaign::~addbuttoncampaign()
{
    delete ui;
}

void addbuttoncampaign::on_addButton_clicked()
{
    AddProduct *AP = new AddProduct;
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>( ui->formLayout->layout());
    layout->addWidget(AP);
//    AP->show();
//    addAudience *AA = new addAudience;
//    AA->show();
//    AddChanel *AC = new AddChanel;
//    AC->show();
}

