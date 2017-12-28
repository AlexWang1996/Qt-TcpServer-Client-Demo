#include <QThread>
#include <QtNetwork/QTcpSocket>



class SocketThread : public QThread
{
	Q_OBJECT
public:
	SocketThread( QObject *parent = 0);
	int socketDescriptor;
	QTcpSocket *socket;
	void run();
	

};



