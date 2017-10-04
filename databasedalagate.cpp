#include "databasedalagate.h"

#include <QSqlDatabase>
#include <QDebug>

DatabaseDelegate::DatabaseDelegate()
{
    setUpSQLDatabase();
    connectDatabase();
}


void DatabaseDelegate::setUpSQLDatabase()
{
    database = std::make_unique<QSqlDatabase>(QSqlDatabase::addDatabase("QMYSQL"));
    database->setHostName("sql2.freesqldatabase.com");
    database->setDatabaseName("sql2195692");
    database->setUserName("sql2195692");
    database->setPassword("eF4!wU6!");
    database->setPort(3306);
}

void DatabaseDelegate::connectDatabase()
{
    if (database->open())
        qWarning() << "database is not connected";
}
