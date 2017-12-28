#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QtGui/QMainWindow>
#include "ui_tcpserver.h"
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QByteArray>
#include <QTextEdit>
#include <fstream>
#include <QVector>
#include <QObject>
using namespace std;


class tcpserver : public QMainWindow
{
	Q_OBJECT

public:
	tcpserver(QWidget *parent = 0, Qt::WFlags flags = 0);
	~tcpserver();
	void writeData();
	void writeClient();
private:
	Ui::tcpserverClass ui;
	QTextEdit *editor;
	QTcpServer *server;
	QTcpSocket *connection;
	QByteArray data;
	QString fileName;
	QString ip;
	int count;
	QTcpSocket *socket;
	




private slots:
	void acceptConnection();
	void readClient();
	
};

#endif // TCPSERVER_H
