#include "downloadmainwindow.h"
#include <QApplication>
#include <QStyle>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    QApplication::setPalette(QApplication::style()->standardPalette());
    QApplication a(argc, argv);
    DownloadMainWindow w;
    w.show();
    
    return a.exec();
}
