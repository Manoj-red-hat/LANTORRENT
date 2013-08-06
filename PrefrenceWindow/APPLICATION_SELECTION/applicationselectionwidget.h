#ifndef APPLICATIONSELECTIONWIDGET_H
#define APPLICATIONSELECTIONWIDGET_H

#include <QWidget>

namespace Ui {
class ApplicationSelectionWidget;
}

class ApplicationSelectionWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit ApplicationSelectionWidget(QWidget *parent = 0);
    ~ApplicationSelectionWidget();
    
private:
    Ui::ApplicationSelectionWidget *ui;
};

#endif // APPLICATIONSELECTIONWIDGET_H
