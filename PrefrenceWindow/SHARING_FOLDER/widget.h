#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QPushButton>
#include <QFileDialog>
#include <QStandardItem>

namespace Ui {
   class Widget;

}
extern QStringList dirNameAll;
class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    void setDirectory();
    ~Widget();

    
private slots:

    void on_addButton_clicked();
    void on_tableView_clicked(QModelIndex index);
    void on_deleteButton_clicked();


private:
    Ui::Widget *ui;
    QStandardItemModel *model;
    QFileDialog *filedialog;
    QStringList dirName;
    QStandardItem *item;
};

#endif // WIDGET_H
