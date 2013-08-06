/********************************************************************************
** Form generated from reading UI file 'qprefrencewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPREFRENCEWIDGET_H
#define UI_QPREFRENCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPrefrenceWidget
{
public:
    QGridLayout *gridLayout_3;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *hostnameButton;
    QPushButton *sharing;
    QPushButton *downloadButton;
    QPushButton *proxyButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QPrefrenceWidget)
    {
        if (QPrefrenceWidget->objectName().isEmpty())
            QPrefrenceWidget->setObjectName(QStringLiteral("QPrefrenceWidget"));
        QPrefrenceWidget->resize(631, 414);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QPrefrenceWidget->sizePolicy().hasHeightForWidth());
        QPrefrenceWidget->setSizePolicy(sizePolicy);
        QPrefrenceWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout_3 = new QGridLayout(QPrefrenceWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dockWidget = new QDockWidget(QPrefrenceWidget);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setMinimumSize(QSize(196, 341));
        dockWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        hostnameButton = new QPushButton(dockWidgetContents);
        hostnameButton->setObjectName(QStringLiteral("hostnameButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/stock_person.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hostnameButton->setIcon(icon);
        hostnameButton->setIconSize(QSize(60, 60));
        hostnameButton->setAutoDefault(false);
        hostnameButton->setFlat(true);

        gridLayout_2->addWidget(hostnameButton, 0, 0, 1, 1);

        sharing = new QPushButton(dockWidgetContents);
        sharing->setObjectName(QStringLiteral("sharing"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/folder-public.svg"), QSize(), QIcon::Normal, QIcon::Off);
        sharing->setIcon(icon1);
        sharing->setIconSize(QSize(60, 60));
        sharing->setAutoDefault(false);
        sharing->setFlat(true);

        gridLayout_2->addWidget(sharing, 1, 0, 1, 1);

        downloadButton = new QPushButton(dockWidgetContents);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/folder-download.svg"), QSize(), QIcon::Normal, QIcon::Off);
        downloadButton->setIcon(icon2);
        downloadButton->setIconSize(QSize(60, 60));
        downloadButton->setAutoDefault(false);
        downloadButton->setFlat(true);

        gridLayout_2->addWidget(downloadButton, 2, 0, 1, 1);

        proxyButton = new QPushButton(dockWidgetContents);
        proxyButton->setObjectName(QStringLiteral("proxyButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/gnome-fs-web.svg"), QSize(), QIcon::Normal, QIcon::Off);
        proxyButton->setIcon(icon3);
        proxyButton->setIconSize(QSize(60, 60));
        proxyButton->setAutoDefault(false);
        proxyButton->setFlat(true);

        gridLayout_2->addWidget(proxyButton, 3, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);

        gridLayout_3->addWidget(dockWidget, 0, 0, 1, 1);

        widget = new QWidget(QPrefrenceWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 346, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(390, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 1, 1, 1);


        retranslateUi(QPrefrenceWidget);

        QMetaObject::connectSlotsByName(QPrefrenceWidget);
    } // setupUi

    void retranslateUi(QWidget *QPrefrenceWidget)
    {
        QPrefrenceWidget->setWindowTitle(QApplication::translate("QPrefrenceWidget", "QPrefrenceWidget", 0));
        hostnameButton->setText(QApplication::translate("QPrefrenceWidget", "&Hostname", 0));
        sharing->setText(QApplication::translate("QPrefrenceWidget", "&Sharing Folder", 0));
        downloadButton->setText(QApplication::translate("QPrefrenceWidget", "&Downloads", 0));
        proxyButton->setText(QApplication::translate("QPrefrenceWidget", "&Proxy", 0));
    } // retranslateUi

};

namespace Ui {
    class QPrefrenceWidget: public Ui_QPrefrenceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPREFRENCEWIDGET_H
