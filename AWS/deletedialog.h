
#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H


#include <QDialog>
#include <QListWidget>
#include <QPushButton>

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteDialog(const QList<int>& numbers, QWidget* parent = nullptr);
    int getSelectedNumber() const;
private:
    QListWidget* numberListWidget;
    QPushButton* deleteButton;
    QPushButton* cancelButton;
    int selectedNumber;

private slots:
    void onNumberSelected();
    void onDeleteClicked();
};

#endif // DELETEDIALOG_H
