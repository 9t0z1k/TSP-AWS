#include "addaudience.h"
#include "ui_addaudience.h"
#include "ui_mainwindow.h"
#include "audienceform.h"
addAudience::addAudience(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addAudience)
{
    ui->setupUi(this);
}

addAudience::~addAudience()
{
    delete ui;
}

void addAudience::on_pushButton_clicked()
{
    audienceForm* AF = new audienceForm;
    ui->formLayout->addWidget(AF);
    ui->pushButton->hide();

}
