#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasedalagate.h"
#include "logInForm/logInWindow.h"

#include <QDebug>
#include <QHBoxLayout>
#include <QtSql/qsqldatabase.h>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWindow)
{
    ui->setupUi(this);
    setUpWindow();
    setUpLayout();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpWindow()
{
    databaseDelegate = std::make_shared<DatabaseDelegate>();
    logInWindow = new LogInWindow(databaseDelegate, this);
}

void MainWindow::setUpLayout()
{
    auto layout = new QHBoxLayout(this);
    layout->addWidget(logInWindow);
    setLayout(layout);
}


//QSqlQuery query(*database);
//       query.exec("create table person "
//                 "(id integer primary key, "
//                 "firstname varchar(20), "
//                 "lastname varchar(30), "
//                 "age integer)");

//       query.prepare("INSERT INTO person (firstname, lastname, age) VALUES (:fname, :lname, :age)");
//       query.bindValue(":fname", "Bohdan");
//       query.bindValue(":lname", "Oheruk");
//       query.bindValue(":age", 20);
//       if (query.exec())
//       {
//           qDebug() << "inserted";
//       }

//query.prepare("SELECT firstname FROM person");
//if (query.exec())
//{
//    while (query.next())
//    {
//        QString firstname = query.value(0).toString();
//        qDebug() << firstname;

//    }
//}
//    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
//    db.setConnectOptions("SQL_ATTR_ACCESS_MODE=SQL_MODE_READ_ONLY;SQL_ATTR_TRACE=SQL_OPT_TRACE_ON");
//       QString connectionString = "DRIVER={ODBC Driver 13 for SQL Server};Server=<sql2.freesqldatabase.com>,<3306>;Uid=<sql2195692>;Pwd=<eF4!wU6!>";
//       db.setDatabaseName(connectionString);

//       if(db.open()) {
//           qDebug() << "Connection succes!" << endl;
//       }else{
//           qDebug() << db.lastError().text();
//       }
