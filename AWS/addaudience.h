#ifndef ADDAUDIENCE_H
#define ADDAUDIENCE_H

#include <QWidget>

namespace Ui {
class addAudience;
}

class addAudience : public QWidget
{
    Q_OBJECT
public:
    explicit addAudience(QWidget *parent = nullptr);
    ~addAudience();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addAudience *ui;
};

#endif // ADDAUDIENCE_H
