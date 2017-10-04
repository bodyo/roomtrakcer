#ifndef DATABASEDALAGATE_H
#define DATABASEDALAGATE_H

#include <memory>
class QString;

class QSqlDatabase;

class DatabaseDelegate
{
public:
    DatabaseDelegate();
    
    bool logInUser(const QString &userName, const QString &password);
    bool registerNewUser(const QString &userName, const QString &password);
    bool logOutUser();
    

private:
    void connectDatabase();
    void setUpSQLDatabase();

private:
    std::unique_ptr<QSqlDatabase> database;
};

#endif // DATABASEDALAGATE_H
