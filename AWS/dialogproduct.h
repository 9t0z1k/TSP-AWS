#ifndef DIALOGPRODUCT_H
#define DIALOGPRODUCT_H

#include <QDialog>
#include "marketcampaign.h"

namespace Ui {
class DialogProduct;
}

class DialogProduct : public QDialog
{
    Q_OBJECT

public:
    explicit DialogProduct(QWidget *parent = nullptr);
    ~DialogProduct();
    void setProduct(MarketCampaign::Product *product);
    void setProductData(const QString& name, const QString& category, const QString& description, double price);

private slots:
    void on_buttonBox_accepted();
signals:
    void dataFilled(const QString& name, const QString& category, const QString& description, double price);

private:
    Ui::DialogProduct *ui;
    MarketCampaign::Product *m_product;
};

#endif // DIALOGPRODUCT_H
