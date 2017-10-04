#ifndef CALENDARVIEW_H
#define CALENDARVIEW_H
#include <QAbstractItemView>
#include <QWidget>
#include <QDate>

class CalendarView : public QAbstractItemView
{
public:
    explicit CalendarView(QWidget *parent = nullptr);

private:
    void setUpCalendar();

private:
    QDate _date;

};

#endif // CALENDARVIEW_H
