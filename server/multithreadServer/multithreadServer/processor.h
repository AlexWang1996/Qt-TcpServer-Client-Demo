#include <QObject>
#include "QtNetwork/QTcpSocket"
#include <QtNetwork/QHostAddress>
class QThread;

class Processor : public QObject
{
	Q_OBJECT
public:
	Processor( QTcpSocket *, int socketDescriptor);
	QString getdatafromClient();
	
private:

	QTcpSocket *client;
	QHostAddress ip;
	QString data;

private slots:
	void work();

signals:
	void renewUI();


};