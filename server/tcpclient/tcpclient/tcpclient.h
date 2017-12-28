#ifndef TCPCLIENT_H
#define TCPCLIENT_H
#include <QtGui/QMainWindow>
#include "ui_tcpclient.h"
#include <QTextEdit>
#include <QtNetwork/QTcpSocket>
#include <QMenu>
#include <QAction>

class tcpclient : public QMainWindow
{
	Q_OBJECT

public:
	tcpclient(QWidget *parent = 0, Qt::WFlags flags = 0);
	~tcpclient();


private:
	Ui::tcpclientClass ui;
	QTcpSocket *client;
	QString data;
	QMenu *openMenu;
	QMenu *sendMenu;
	QAction *sendAction;
	QAction *openAction;
	QTextEdit *editor;
	QTextStream *in;

private slots:
	void open();
	void send();
	void display();
	

};

#endif // TCPCLIENT_H
