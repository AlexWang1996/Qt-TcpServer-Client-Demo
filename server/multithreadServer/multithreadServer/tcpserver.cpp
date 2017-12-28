#include "tcpserver.h"
#include <QDebug>

Tcpserver::Tcpserver(QObject *parent ):QTcpServer(parent)
{


}

void Tcpserver::incomingConnection(int socketDescriptor)
{

	SocketThread *thread = new SocketThread(this);
	p = new Processor(thread->socket,socketDescriptor);
	connect(thread->socket,SIGNAL(readyRead()),p,SLOT(work()),Qt::DirectConnection);
	connect(p,SIGNAL(renewUI()),this,SLOT(getData()));
	connect(thread->socket,SIGNAL(disconnected()),thread,SLOT(quit()));	
	connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
	p->moveToThread(thread);
	thread->start();
}

void Tcpserver::getData()
{
	showData = p->getdatafromClient();
	emit renewUI();

}

QString Tcpserver::getShowdata()
{
	return this->showData;
}

