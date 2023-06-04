#ifndef PRODUCTFORM_H
#define PRODUCTFORM_H

#include <QWidget>
#include "dialogproduct.h"
#include "marketcampaign.h"

namespace Ui {
class productForm;
}

class productForm : public QWidget
{
    Q_OBJECT

public:
    explicit productForm(QWidget *parent = nullptr);
    ~productForm();
    void saveDataToXml(const QString& fileName);

    void loadDataFromXml(const QString& fileName);
private slots:
    void on_pushButton_clicked();
    void updateProductData(const QString& name, const QString& category, const QString& description, double price);

    void on_pushButton_2_clicked();



    void on_save_clicked();

    void on_load_clicked();

private:
    Ui::productForm *ui;
    MarketCampaign::Product m_product;
    DialogProduct* DP;
};

#endif // PRODUCTFORM_H
