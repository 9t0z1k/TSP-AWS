#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class AddProduct;
}

class AddProduct : public QWidget
{
    Q_OBJECT
    friend class MainWindow;
public:
    explicit AddProduct(QWidget *parent = nullptr);
    ~AddProduct();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddProduct *ui;
    Ui::MainWindow *Ui;
};

#endif // ADDPRODUCT_H
