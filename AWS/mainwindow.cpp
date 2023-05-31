
#include "mainwindow.h"
#include "addchanel.h"
#include "addproduct.h"
#include "addaudience.h"
#include "campaignform.h"
#include "qlabel.h"
#include "ui_mainwindow.h"
#include "QLayout"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_action_triggered()
{

}



void MainWindow::on_pushButton_clicked()
{
    static int count = 1;
    QLabel* label = new QLabel("Маркетинговая компания № " + QString::number(count));
    ui->formLayout->addWidget(label);
    count++;
    CampaignForm* CP = new CampaignForm;
    AddProduct *AP = new AddProduct;
    addAudience *AA = new addAudience;
    AddChanel *ACH = new AddChanel;
    ui->formLayout->addWidget(CP);
    ui->formLayout->addWidget(AP);
    ui->formLayout->addWidget(AA);
    ui->formLayout->addWidget(ACH);
    QFrame* line = new QFrame;
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    ui->formLayout->addWidget(line);
}

