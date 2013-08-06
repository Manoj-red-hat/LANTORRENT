#ifndef HOSTNAMEWIDGET_H
#define HOSTNAMEWIDGET_H

#include <QWidget>

namespace Ui {
class HostNameWidget;
}

class HostNameWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit HostNameWidget(QWidget *parent = 0);
    ~HostNameWidget();
    
private:
    Ui::HostNameWidget *ui;
};

#endif // HOSTNAMEWIDGET_H
