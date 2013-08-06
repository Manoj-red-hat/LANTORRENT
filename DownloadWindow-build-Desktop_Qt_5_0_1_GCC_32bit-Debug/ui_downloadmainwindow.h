/********************************************************************************
** Form generated from reading UI file 'downloadmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADMAINWINDOW_H
#define UI_DOWNLOADMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadMainWindow
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *fileName;
    QLineEdit *fileSize;
    QLineEdit *fileType;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *senderIP;
    QLineEdit *sendersPort;
    QLineEdit *gateway;
    QProgressBar *progressBar;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *currentSpeed;
    QLabel *label_8;
    QLineEdit *timeElapsed;
    QPushButton *pushButton;

    void setupUi(QWidget *DownloadMainWindow)
    {
        if (DownloadMainWindow->objectName().isEmpty())
            DownloadMainWindow->setObjectName(QStringLiteral("DownloadMainWindow"));
        DownloadMainWindow->resize(487, 280);
        gridLayout_5 = new QGridLayout(DownloadMainWindow);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(DownloadMainWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(DownloadMainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_3 = new QLabel(DownloadMainWindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fileName = new QLineEdit(DownloadMainWindow);
        fileName->setObjectName(QStringLiteral("fileName"));
        fileName->setReadOnly(true);

        horizontalLayout_2->addWidget(fileName);

        fileSize = new QLineEdit(DownloadMainWindow);
        fileSize->setObjectName(QStringLiteral("fileSize"));
        fileSize->setReadOnly(true);

        horizontalLayout_2->addWidget(fileSize);

        fileType = new QLineEdit(DownloadMainWindow);
        fileType->setObjectName(QStringLiteral("fileType"));
        fileType->setReadOnly(true);

        horizontalLayout_2->addWidget(fileType);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label_4 = new QLabel(DownloadMainWindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        label_5 = new QLabel(DownloadMainWindow);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        label_6 = new QLabel(DownloadMainWindow);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        senderIP = new QLineEdit(DownloadMainWindow);
        senderIP->setObjectName(QStringLiteral("senderIP"));
        senderIP->setReadOnly(true);

        horizontalLayout_4->addWidget(senderIP);

        sendersPort = new QLineEdit(DownloadMainWindow);
        sendersPort->setObjectName(QStringLiteral("sendersPort"));
        sendersPort->setReadOnly(true);

        horizontalLayout_4->addWidget(sendersPort);

        gateway = new QLineEdit(DownloadMainWindow);
        gateway->setObjectName(QStringLiteral("gateway"));
        gateway->setReadOnly(true);

        horizontalLayout_4->addWidget(gateway);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        progressBar = new QProgressBar(DownloadMainWindow);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(DownloadMainWindow);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        currentSpeed = new QLineEdit(DownloadMainWindow);
        currentSpeed->setObjectName(QStringLiteral("currentSpeed"));
        currentSpeed->setReadOnly(true);

        gridLayout_3->addWidget(currentSpeed, 0, 1, 1, 1);

        label_8 = new QLabel(DownloadMainWindow);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        timeElapsed = new QLineEdit(DownloadMainWindow);
        timeElapsed->setObjectName(QStringLiteral("timeElapsed"));
        timeElapsed->setReadOnly(true);

        gridLayout_3->addWidget(timeElapsed, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        pushButton = new QPushButton(DownloadMainWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        gridLayout_4->addWidget(pushButton, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(DownloadMainWindow);

        QMetaObject::connectSlotsByName(DownloadMainWindow);
    } // setupUi

    void retranslateUi(QWidget *DownloadMainWindow)
    {
        DownloadMainWindow->setWindowTitle(QApplication::translate("DownloadMainWindow", "DownloadMainWindow", 0));
        label->setText(QApplication::translate("DownloadMainWindow", "NAME", 0));
        label_2->setText(QApplication::translate("DownloadMainWindow", "SIZE", 0));
        label_3->setText(QApplication::translate("DownloadMainWindow", "TYPE", 0));
        fileName->setText(QString());
        fileSize->setText(QString());
        fileType->setText(QString());
        label_4->setText(QApplication::translate("DownloadMainWindow", "SENDER IP", 0));
        label_5->setText(QApplication::translate("DownloadMainWindow", "NAME", 0));
        label_6->setText(QApplication::translate("DownloadMainWindow", "GATEWAY", 0));
        gateway->setText(QApplication::translate("DownloadMainWindow", "1837@mk", 0));
        label_7->setText(QApplication::translate("DownloadMainWindow", "Current Speed", 0));
        label_8->setText(QApplication::translate("DownloadMainWindow", "Time Elapsed", 0));
        pushButton->setText(QApplication::translate("DownloadMainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class DownloadMainWindow: public Ui_DownloadMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADMAINWINDOW_H
