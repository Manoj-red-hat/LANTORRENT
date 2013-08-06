#include "qthelpwidget.h"
#include <QApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtHelpWidget w;
    //w.show();
    
    return a.exec();
}

