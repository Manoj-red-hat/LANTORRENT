#include "widget.h"
#include "ui_widget.h"
#include <QStyleFactory>
#include <QtHelp/QHelpSearchEngine>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    model = new QStandardItemModel(0,1,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("DIRECTORY NAME")));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->addButton->setDefault(true);
    ui->deleteButton->setDefault(true);

}

void Widget::setDirectory()
{
    for(int i=0;i<dirNameAll.size();i++){
        ui->tableView->setVisible(true);
        item = new QStandardItem(dirNameAll.at(i));
        model->insertRow(0,item);
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addButton_clicked()
{
    ui->tableView->setVisible(true);
    item = new QStandardItem("CLICK LEFT");
    model->insertRow(0,item);
}

void Widget::on_tableView_clicked(QModelIndex index)
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    if(!dirNameAll.contains(dir,Qt::CaseInsensitive)){
        model->setData(ui->tableView->model()->index(index.row(),0),dir);
        dirNameAll.append(dir);

    }else{
        QMessageBox::warning(this,"DUPLICATION","ADDING SAME DIRECTORY ");
    }

}
void Widget::on_deleteButton_clicked()
{

    QItemSelection selection(QItemSelection(ui->tableView->selectionModel()->selection()));
    QList<int> rows;

    foreach( const QModelIndex & index, selection.indexes() ) {
        rows.append( index.row() );
    }

    qSort( rows );
    int prev = -1;
    for( int i = rows.count() - 1; i >= 0; i -= 1 ) {
        int current = rows[i];
        if( current != prev ) {
            model->removeRows( current, 1 );
            prev = current;
        }
    }


}

