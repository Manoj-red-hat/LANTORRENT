#include "applicationselectionwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApplicationSelectionWidget w;
    w.show();
    
    return a.exec();
}
