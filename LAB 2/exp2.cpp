#include <iostream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;
};

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month - 1];
}

Date addDays(Date date, int days)
{
    while (days > 0)
    {
        int daysInCurrentMonth = daysInMonth(date.month, date.year);
        if (date.day + days > daysInCurrentMonth)
        {
            days -= (daysInCurrentMonth - date.day + 1);
            date.day = 1;
            date.month++;
            if (date.month > 12)
            {
                date.month = 1;
                date.year++;
            }
        }
        else
        {
            date.day += days;
            days = 0;
        }
    }
    return date;
}

int main()
{
    Date inputDate;
    int days;

    cout << "Enter the initial date (DD MM YYYY): ";
    cin >> inputDate.day >> inputDate.month >> inputDate.year;

    cout << "Enter the time period (number of days): ";
    cin >> days;

    Date resultDate = addDays(inputDate, days);

    cout << "The date after the given time period is: "
         << resultDate.day << "-" << resultDate.month << "-" << resultDate.year << endl;

    return 0;
}