#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include "timeIn12.h"
using namespace std;

void TimeIn12 :: readMeridian()
{
    cout << endl
         << "Enter 0 for A.M. or 1 for P.M.";
    cin >> meridian;
}
void TimeIn12 :: readHours()
{
    cout << endl
         << "Enter hours - ";
    cin >> hours;
}
void TimeIn12 :: readMinutes()
{
    cout << endl
         << "Enter minutes - ";
    cin >> minutes;
}
void TimeIn12 :: readSeconds()
{
    cout << endl
         << "Enter seconds - ";
    cin >> seconds;
}
void TimeIn12 :: readTime()
{
    readMeridian();
    while (meridian != 1 && meridian != 0)
    {
        cout << endl
             << "Out of range !";
        readMeridian();
    }
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
    while (hours > 12)
    {
        cout << endl
             << "Out of range !";
        readHours();
    }
}
void TimeIn12 :: printTime()
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
        << seconds
        << " ";
    meridian == 0 ? cout << "A.M." : cout << "P.M.";
}

TimeIn12 TimeIn12 ::addTime(TimeIn12 &object1, TimeIn12 &object2)
{
    TimeIn12 sum;
    sum.seconds = object1.seconds + object2.seconds;
    sum.minutes = object1.minutes + object2.minutes;
    sum.hours = object1.hours + object2.hours;

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
    if (sum.hours > 12)
    {
        sum.hours -= 12;
        meridian = !meridian;
    }
    return sum;
}
