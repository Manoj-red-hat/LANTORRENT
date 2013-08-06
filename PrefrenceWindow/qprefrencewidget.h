#ifndef QPREFRENCEWIDGET_H
#define QPREFRENCEWIDGET_H

#include <QWidget>
#include <QtSvg/QSvgRenderer>
#include <PrefrenceWindow/SHARING_FOLDER/widget.h>
//#include <SHARING_FOLDER/widget.h>
#include "global.h"

class Widget;

namespace Ui {
class QPrefrenceWidget;
}

class QPrefrenceWidget : public QWidget
{
    Q_OBJECT
    
public:
     QPrefrenceWidget(QWidget *parent = 0);


     QString downloadDirectoy();

     void setDownloadDirectory(QString str);

     void setSharedDirectory();

    ~QPrefrenceWidget();
    
private slots:
    void on_hostnameButton_clicked();
    void on_sharing_clicked();
    void on_downloadButton_clicked();

    void on_browseButton_clicked();

private:
    Ui::QPrefrenceWidget *ui;
    Widget *sharingWidget;


};

#endif // QPREFRENCEWIDGET_H
