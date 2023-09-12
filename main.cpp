#include <QCoreApplication>
#include <QDebug>
#include <QtNetwork>
#include <QSqlDatabase>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QNetworkProxy np;
    qDebug("Object created 'QNetworkProxy'");

    QSqlDatabase sqldb;
    qDebug("Object created 'QSqlDatabase'");

    return a.exec();
}
