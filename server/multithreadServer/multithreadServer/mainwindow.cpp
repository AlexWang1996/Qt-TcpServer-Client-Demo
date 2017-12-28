#include "mainwindow.h"

#include <QThread>
MainWindow::MainWindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{

	ui.setupUi(this);
	editor = new QTextEdit;
	setCentralWidget(editor);
	sendMenu = menuBar()->addMenu(tr("send"));
	sendAction = new QAction(tr("send"),this);	
	server = new Tcpserver;
	server->setParent(this);
	server->listen(QHostAddress::Any,12345);
	connect(server,SIGNAL(renewUI()), this, SLOT(showdata()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::showdata()
{

	editor->setText(server->getShowdata());
}
