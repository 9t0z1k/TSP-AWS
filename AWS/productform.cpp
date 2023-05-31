#include "productform.h"
#include "ui_productform.h"
#include "dialogproduct.h"

productForm::productForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::productForm),
    DP(nullptr)
{
    ui->setupUi(this);
}

productForm::~productForm()
{
    delete ui;
    delete DP;
}

void productForm::on_pushButton_clicked()
{
    DP = new DialogProduct;
    DP->show();
    connect(DP, &DialogProduct::dataFilled, this, &productForm::updateProductData);
    ui->pushButton->hide();
}

void productForm::updateProductData(const QString& name, const QString& category, const QString& description, double price)
{
    // Обновление данных объекта Product
    m_product.setPrName(name);
    m_product.setCategory(category);
    m_product.setDescription(description);
    m_product.setPrice(price);

    // Отображение данных в виджете
    ui->lineEdit_3->setText(name);
    ui->lineEdit->setText(category);
    ui->textBrowser->setText(description);
    ui->doubleSpinBox->setValue(price);
}

void productForm::on_pushButton_2_clicked()
{
    DP = new DialogProduct(this);
    DP->setProductData(m_product.getPrName(), m_product.getCategory(), m_product.getDescription(), m_product.getPrice());

    connect(DP, &DialogProduct::dataFilled, this, &productForm::updateProductData);
    DP->exec();
}

