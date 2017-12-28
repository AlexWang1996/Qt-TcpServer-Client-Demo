/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpserverClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tcpserverClass)
    {
        if (tcpserverClass->objectName().isEmpty())
            tcpserverClass->setObjectName(QString::fromUtf8("tcpserverClass"));
        tcpserverClass->resize(600, 400);
        menuBar = new QMenuBar(tcpserverClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        tcpserverClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tcpserverClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        tcpserverClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(tcpserverClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tcpserverClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(tcpserverClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        tcpserverClass->setStatusBar(statusBar);

        retranslateUi(tcpserverClass);

        QMetaObject::connectSlotsByName(tcpserverClass);
    } // setupUi

    void retranslateUi(QMainWindow *tcpserverClass)
    {
        tcpserverClass->setWindowTitle(QApplication::translate("tcpserverClass", "tcpserver", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcpserverClass: public Ui_tcpserverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
