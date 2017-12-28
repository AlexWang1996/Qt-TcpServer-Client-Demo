#include "tcpclient.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <fstream>
#include <QMessageBox>



tcpclient::tcpclient(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	editor = new QTextEdit;
	setCentralWidget(editor);
	openMenu = menuBar()->addMenu(tr("open"));
	sendMenu = menuBar()->addMenu(tr("send"));
	openAction = new QAction(tr("open"),this);
	sendAction = new QAction(tr("send"),this);
	openMenu->addAction(openAction);
	sendMenu->addAction(sendAction);
	client = new QTcpSocket;
	connect(openAction,SIGNAL(triggered()),this, SLOT(open()));
	connect(sendAction,SIGNAL(triggered()),this, SLOT(send()));
	connect(client,SIGNAL(readyRead()),this,SLOT(display()));
	

}

tcpclient::~tcpclient()
{

}

void tcpclient::open()
{

	QString getFile = QFileDialog::getOpenFileName();
	QString fileName = QFileInfo(getFile).fileName();
	qDebug() << fileName;
	qDebug() << getFile;
	QFile f(getFile);
	if(!f.open(QIODevice::ReadOnly) )
		QMessageBox::information(NULL,"Cannot open this file","Retry or not",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);
	in = new QTextStream(&f);
	//editor->append(in->readAll());
	data = in->readAll().toLocal8Bit();


}

void tcpclient::send()
{		
	client->connectToHost("192.168.1.183",12345);
	client->write(data.toStdString().c_str());
}


void tcpclient::display()
{
	editor->append(client->readAll());
}