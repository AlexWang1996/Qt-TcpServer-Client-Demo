#include "socketthread.h"
#include <QDebug>

SocketThread::SocketThread( QObject * parent) : QThread(parent)
{
	//qDebug() <<"socket Thread" <<QThread::currentThread();
	socket = new QTcpSocket;

}

void SocketThread::run ()
{
	//qDebug() << "SocketThread " << QThread::currentThread();
	this->exec();
	
}
