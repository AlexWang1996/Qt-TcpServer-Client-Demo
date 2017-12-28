#include "processor.h"
#include <QThread>

Processor::Processor(QTcpSocket * pst,int socketDescriptor)
{
	this->client = pst;
	this->client->setSocketDescriptor(socketDescriptor);
}

void Processor::work()
{
	ip = client->peerAddress();
	data =  QString::fromLocal8Bit(client->readAll());
	emit renewUI();
	client->write("received");
	//qDebug() << data;
}

QString Processor::getdatafromClient()
{
	return this->data;
}
