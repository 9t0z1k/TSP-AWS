#include "dialogproduct.h"
#include "ui_dialogproduct.h"

DialogProduct::DialogProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogProduct),
    m_product(nullptr)
{
    ui->setupUi(this);
}

DialogProduct::~DialogProduct()
{
    delete ui;
}

void DialogProduct::setProductData(const QString& name, const QString& category, const QString& description, double price)
{
    ui->lineEdit_6->setText(name);
    ui->lineEdit_5->setText(category);
    ui->textEdit_2->setText(description);
    ui->doubleSpinBox->setValue(price);
}

void DialogProduct::setProduct(MarketCampaign::Product *product)
{
    m_product = product;
}

void DialogProduct::on_buttonBox_accepted()
{
    MarketCampaign::Product *product = nullptr;
    DialogProduct dialog(this);
    dialog.setProduct(product);

    QString name = ui->lineEdit_6->text();
    QString category = ui->lineEdit_5->text();
    QString description = ui->textEdit_2->toPlainText();
    double price = ui->doubleSpinBox->value();

    // Сохранение данных в объекте MarketCampaign::Product
    if (m_product != nullptr)
    {
        m_product->setPrName(name);
        m_product->setCategory(category);
        m_product->setDescription(description);
        m_product->setPrice(price);
    }

    emit dataFilled(name, category, description, price);
    delete product;
    accept();
}

