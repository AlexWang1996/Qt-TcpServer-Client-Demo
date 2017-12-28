#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QtNetwork>
#include "processor.h"
#include "tcpserver.h"
#include "socketthread.h"

class Tcpserver : public QTcpServer
{
	Q_OBJECT
public:
	Tcpserver(QObject *parent=0);
	QString getShowdata();

private:
	void incomingConnection(int socketDescriptor);
	Processor *p;
	QString showData;

private slots:
	void getData();

signals:
	void renewUI();



};


#endif