
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateCampaignNumbers();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


   private:
    Ui::MainWindow *ui;
    QList<int> campaignNumbers;       // Список номеров маркетинговых компаний
    QList<QWidget*> campaignForms;    // Список указателей на формы маркетинговых компаний

};

#endif // MAINWINDOW_H
