#ifndef ADDBUTTONCAMPAIGN_H
#define ADDBUTTONCAMPAIGN_H

#include <QWidget>

namespace Ui {
class addbuttoncampaign;
}

class addbuttoncampaign : public QWidget
{
    Q_OBJECT

public:
    explicit addbuttoncampaign(QWidget *parent = nullptr);
    ~addbuttoncampaign();

private slots:
    void on_addButton_clicked();

private:
    Ui::addbuttoncampaign *ui;
};

#endif // ADDBUTTONCAMPAIGN_H
