#include "productform.h"
#include "ui_productform.h"
#include "dialogproduct.h"
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <QDebug>
#include <QFileDialog>

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

void productForm::saveDataToXml(const QString& fileName)
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter xmlWriter(&file);
        xmlWriter.setAutoFormatting(true);

        xmlWriter.writeStartDocument();
        xmlWriter.writeStartElement("ProductData");

        xmlWriter.writeTextElement("Name", m_product.getPrName());
        xmlWriter.writeTextElement("Category", m_product.getCategory());
        xmlWriter.writeTextElement("Description", m_product.getDescription());
        xmlWriter.writeTextElement("Price", QString::number(m_product.getPrice()));

        xmlWriter.writeEndElement();
        xmlWriter.writeEndDocument();

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for writing.";
    }
}

void productForm::loadDataFromXml(const QString& fileName)
{
    QFile file(fileName);
    QString PD = "ProductData";
    QString N = "Name";
    QString C = "Category";
    QString P = "Price";
    QString S = "Description";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader xmlReader(&file);

        while (!xmlReader.atEnd() && !xmlReader.hasError())
        {
            QXmlStreamReader::TokenType token = xmlReader.readNext();

            if (token == QXmlStreamReader::StartDocument)
            {
                continue;
            }

            if (token == QXmlStreamReader::StartElement)
            {
                if (xmlReader.name() == PD)
                {
                    continue;
                }

                if (xmlReader.name() == N)
                {
                    xmlReader.readNext();
                    m_product.setPrName(xmlReader.text().toString());
                    ui->lineEdit_3->setText(xmlReader.text().toString());
                }
                else if (xmlReader.name() == C)
                {
                    xmlReader.readNext();
                    m_product.setCategory(xmlReader.text().toString());
                    ui->lineEdit->setText(xmlReader.text().toString());
                }
                else if (xmlReader.name() == S)
                {
                    xmlReader.readNext();
                    m_product.setDescription(xmlReader.text().toString());
                    ui->textBrowser->setText(xmlReader.text().toString());
                }
                else if (xmlReader.name() == P)
                {
                    xmlReader.readNext();
                    double price = xmlReader.text().toDouble();
                    m_product.setPrice(price);
                    ui->doubleSpinBox->setValue(price);
                }
            }
        }

        if (xmlReader.hasError())
        {
            qDebug() << "XML parsing error: " << xmlReader.errorString();
        }

        file.close();
    }
    else
    {
        qDebug() << "Failed to open file for reading.";
    }
}
void productForm::on_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        saveDataToXml(fileName);
    }
}


void productForm::on_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Загрузить данные", "", "XML Files (*.xml)");
    if (!fileName.isEmpty())
    {
        loadDataFromXml(fileName);
    }
}

