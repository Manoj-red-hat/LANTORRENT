#ifndef QTHELPWIDGET_H
#define QTHELPWIDGET_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class QtHelpWidget;
}

class QtHelpWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit QtHelpWidget(QWidget *parent = 0);
    ~QtHelpWidget();
private slots:
     void readyReadStandardOutput();
private:
    Ui::QtHelpWidget *ui;
    QProcess *mk;
};

#endif // QTHELPWIDGET_H
