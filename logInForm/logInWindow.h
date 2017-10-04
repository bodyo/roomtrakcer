#ifndef LOGINWINDOW
#define LOGINWINDOW

#include <QWidget>
#include <memory>

class QTextEdit;
class QPushButton;
class QLabel;
class DatabaseDelegate;

class LogInWindow : public QWidget
{
public:
    LogInWindow(std::shared_ptr<DatabaseDelegate> &databaseDelegate, QWidget *parent = nullptr);

private:
    void setUpWindow();
    void setUpLayout();

private:
    QTextEdit *username;
    QTextEdit *userPassword;
    QLabel *labelUsername;
    QLabel *labelUserPassword;
    QPushButton *logIn;
    std::shared_ptr<DatabaseDelegate> _databaseDelegate;
};

#endif //LOGINWINDOW
