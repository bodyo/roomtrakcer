#include "logInWindow.h"

#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>

#include <databasedalagate.h>

LogInWindow::LogInWindow(std::shared_ptr<DatabaseDelegate> &databaseDelegate, QWidget *parent)
    :QWidget(parent), _databaseDelegate{databaseDelegate}
{
    setUpWindow();
    setUpLayout();
}

void LogInWindow::setUpWindow()
{
    username = new QTextEdit(this);
    username->setPlaceholderText("username");
    username->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));

    userPassword = new QTextEdit(this);
    userPassword->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    userPassword->setPlaceholderText("password");
    logIn = new QPushButton(this);
    logIn->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    logIn->setText("Log in");
}

void LogInWindow::setUpLayout()
{
    auto layout = new QVBoxLayout(this);
    layout->setContentsMargins(10, 100, 10, 100);

    layout->addWidget(username);
    layout->addWidget(userPassword);
    layout->addWidget(logIn);
    setLayout(layout);
}
