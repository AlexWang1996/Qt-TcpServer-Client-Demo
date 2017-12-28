#include "tcpclient.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tcpclient w;
	w.show();
	return a.exec();
}
