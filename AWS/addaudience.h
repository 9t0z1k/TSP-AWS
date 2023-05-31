#ifndef ADDAUDIENCE_H
#define ADDAUDIENCE_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class addAudience;
}

class addAudience : public QWidget
{
    Q_OBJECT
    friend MainWindow;
public:
    explicit addAudience(QWidget *parent = nullptr);
    ~addAudience();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addAudience *ui;
    Ui::MainWindow *Ui;
};

#endif // ADDAUDIENCE_H
