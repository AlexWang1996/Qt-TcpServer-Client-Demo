/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

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

class Ui_tcpclientClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tcpclientClass)
    {
        if (tcpclientClass->objectName().isEmpty())
            tcpclientClass->setObjectName(QString::fromUtf8("tcpclientClass"));
        tcpclientClass->resize(600, 400);
        menuBar = new QMenuBar(tcpclientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        tcpclientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tcpclientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        tcpclientClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(tcpclientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tcpclientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(tcpclientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        tcpclientClass->setStatusBar(statusBar);

        retranslateUi(tcpclientClass);

        QMetaObject::connectSlotsByName(tcpclientClass);
    } // setupUi

    void retranslateUi(QMainWindow *tcpclientClass)
    {
        tcpclientClass->setWindowTitle(QApplication::translate("tcpclientClass", "tcpclient", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tcpclientClass: public Ui_tcpclientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
