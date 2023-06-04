
#include "mainwindow.h"
#include "addchanel.h"
#include "addproduct.h"
#include "addaudience.h"
#include "campaignform.h"
#include "deletedialog.h"
#include "qdialog.h"
#include "qlabel.h"
#include "ui_mainwindow.h"


static int count = 1;

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

void MainWindow::on_pushButton_clicked()
{
    if(campaignNumbers.contains(count)) count++;
    QLabel* label = new QLabel("Маркетинговая компания № " + QString::number(count));
    //
    QWidget* Form = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout;
    QSpacerItem* spacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    layout->addSpacerItem(spacer);
    Form->setLayout(layout);
    ui->formLayout->addWidget(Form);
    Form->layout()->addWidget(label);
    CampaignForm* CP = new CampaignForm;
    AddProduct *AP = new AddProduct;
    addAudience *AA = new addAudience;
    AddChanel *ACH = new AddChanel;
    Form->layout()->addWidget(CP);
    Form->layout()->addWidget(AP);
    Form->layout()->addWidget(AA);
    Form->layout()->addWidget(ACH);
    QFrame* line = new QFrame;
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    Form->layout()->addWidget(line);
    campaignNumbers.append(count);
    campaignForms.append(Form);
    count++;
    //
//    ui->formLayout->addWidget(label);
//    count++;
//    CampaignForm* CP = new CampaignForm;
//    AddProduct *AP = new AddProduct;
//    addAudience *AA = new addAudience;
//    AddChanel *ACH = new AddChanel;
//    ui->formLayout->addWidget(CP);
//    ui->formLayout->addWidget(AP);
//    ui->formLayout->addWidget(AA);
//    ui->formLayout->addWidget(ACH);
//    QFrame* line = new QFrame;
//    line->setFrameShape(QFrame::HLine);
//    line->setFrameShadow(QFrame::Sunken);
//    ui->formLayout->addWidget(line);
}


void MainWindow::on_pushButton_2_clicked()
{
    DeleteDialog deleteDialog(campaignNumbers, this);
    if (deleteDialog.exec() == QDialog::Accepted) {
        int selectedNumber = deleteDialog.getSelectedNumber();
        if (selectedNumber >= 0 && selectedNumber < campaignForms.size()) {
            QWidget* form = campaignForms.at(selectedNumber);
            if (form) {
                ui->formLayout->removeWidget(form);
                form->deleteLater();
                campaignForms.removeAt(selectedNumber);
                campaignNumbers.removeAt(selectedNumber);
                count--;
            }
        }
    }
}
