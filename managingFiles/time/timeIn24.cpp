#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include "timeIn24.h"
using namespace std;

void TimeIn24 ::readHours()
{
    cout << endl
         << "Enter hour - ";
    cin >> hours;
}
void TimeIn24 ::readMinutes()
{
    cout << endl
         << "Enter minutes - ";
    cin >> minutes;
}
void TimeIn24 ::readSeconds()
{
    cout << endl
         << "Enter seconds - ";
    cin >> seconds;
}
void TimeIn24 ::readTime()
{
    readSeconds();
    while (seconds > 60)
    {
        cout << endl
             << "Out of range !";
        readSeconds();
    }
    readMinutes();
    while (minutes > 60)
    {
        cout << endl
             << "Out of range !";
        readMinutes();
    }
    readHours();
    while (hours > 24)
    {
        cout << endl
             << "Out of range !";
        readHours();
    }
}
void TimeIn24 ::printTime()
{
    cout.fill('0');
    cout
        << endl
        << setw(2)
        << "The time is - "
        << endl
        << setw(2)
        << hours
        << ": "
        << setw(2)
        << minutes
        << ": "
        << setw(2)
        << seconds;
}
TimeIn24 TimeIn24 ::addTime(TimeIn24 &object1, TimeIn24 &object2)
{
    TimeIn24 sum;
    sum.hours = object1.hours + object2.hours;
    sum.minutes = object1.minutes + object2.minutes;
    sum.seconds = object1.seconds + object2.seconds;
    if (sum.seconds >= 60)
    {
        sum.seconds -= 60;
        sum.minutes++;
    }
    if (sum.minutes >= 60)
    {
        sum.minutes -= 60;
        sum.hours++;
    }
    if (sum.hours >= 24)
    {
        sum.hours -= 24;
    }
    return sum;
}
TimeIn24 TimeIn24 ::increment(TimeIn24 &object1)
{
    TimeIn24 sum;
    sum.seconds = object1.seconds + 1;
    sum.minutes = object1.minutes;
    sum.hours = object1.hours;
    if (sum.seconds >= 60)
    {
        sum.seconds -= 60;
        sum.minutes++;
    }
    if (sum.minutes >= 60)
    {
        sum.minutes -= 60;
        sum.hours++;
    }
    if (sum.hours >= 24)
    {
        sum.hours -= 24;
    }

    return sum;
}
