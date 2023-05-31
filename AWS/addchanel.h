#ifndef ADDCHANEL_H
#define ADDCHANEL_H

#include <QWidget>
#include "mainwindow.h"
#include "channelform.h"
namespace Ui {
class AddChanel;
}

class AddChanel : public QWidget
{
    Q_OBJECT
    friend class MainWindow;
public:
    explicit AddChanel(QWidget *parent = nullptr);
    ~AddChanel();
private slots:
    void on_pushButton_clicked();

private:
    Ui::AddChanel *ui;
    Ui::MainWindow *Ui;
};

#endif // ADDCHANEL_H
