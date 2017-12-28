#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QMenu>
#include <QAction>
#include "tcpserver.h"
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWindow();
	QTextEdit *editor;
private:
	Ui::MainWindowClass ui;
	QMenu *sendMenu;
	QAction *sendAction;
	Tcpserver *server;
private slots:
	void showdata();


};

#endif // MAINWINDOW_H
