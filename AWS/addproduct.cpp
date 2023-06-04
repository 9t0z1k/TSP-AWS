#include "addproduct.h"
#include "dialogproduct.h"
#include "ui_addproduct.h"
#include "productform.h"

AddProduct::AddProduct(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddProduct)
{
    ui->setupUi(this);
}

AddProduct::~AddProduct()
{
    delete ui;
}

void AddProduct::on_pushButton_clicked()
{
    productForm* PF = new productForm;
    ui->formLayout->addWidget(PF);
    ui->pushButton->hide();
}
