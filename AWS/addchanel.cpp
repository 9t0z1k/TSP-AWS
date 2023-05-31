#include "addchanel.h"
#include "ui_addchanel.h"
#include "dialogchannel.h"
#include "ui_mainwindow.h"

AddChanel::AddChanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddChanel),
    Ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

AddChanel::~AddChanel()
{
    delete ui;
}


void AddChanel::on_pushButton_clicked()
{
    channelForm* CF = new channelForm;
    ui->formLayout->addWidget(CF);
//    DialogChannel* DC = new DialogChannel;
//    ui->formLayout->addWidget(DC);
    ui->pushButton->hide();

}
