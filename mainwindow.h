#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <memory>

class DatabaseDelegate;
class LogInWindow;

namespace Ui {
class mainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void setUpWindow();
    void setUpLayout();

private:
    std::shared_ptr<DatabaseDelegate> databaseDelegate;

    LogInWindow *logInWindow;

    Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
