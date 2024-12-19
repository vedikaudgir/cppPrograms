#ifndef TIMEIN12_H
#define TIMEIN12_H
#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;

class TimeIn12
{
    int hours, minutes, seconds;
    bool meridian;

    public:
    void readMeridian();
    void readHours();
    void readMinutes();
    void readSeconds();
    void readTime();
    void printTime();
    TimeIn12 addTime(TimeIn12 &object1, TimeIn12 &object2);
};

#endif // TIMEIN12_H