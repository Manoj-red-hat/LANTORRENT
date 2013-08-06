/********************************************************************************
** Form generated from reading UI file 'qthelpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHELPWIDGET_H
#define UI_QTHELPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtHelpWidget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *QtHelpWidget)
    {
        if (QtHelpWidget->objectName().isEmpty())
            QtHelpWidget->setObjectName(QStringLiteral("QtHelpWidget"));
        QtHelpWidget->resize(278, 209);
        gridLayout = new QGridLayout(QtHelpWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(QtHelpWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);


        retranslateUi(QtHelpWidget);

        QMetaObject::connectSlotsByName(QtHelpWidget);
    } // setupUi

    void retranslateUi(QWidget *QtHelpWidget)
    {
        QtHelpWidget->setWindowTitle(QApplication::translate("QtHelpWidget", "QtHelpWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class QtHelpWidget: public Ui_QtHelpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHELPWIDGET_H
