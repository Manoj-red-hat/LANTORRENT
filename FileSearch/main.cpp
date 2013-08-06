#include "filesearchwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileSearchWidget w;
    w.show();
    
    return a.exec();
}
