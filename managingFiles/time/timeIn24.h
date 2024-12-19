#ifndef TIMEIN24_H
#define TIMEIN24_H
#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;
class TimeIn24
{
    int hours, minutes, seconds;

public:
    void readHours();
    void readMinutes();
    void readSeconds();
    void readTime();
    void printTime();
    TimeIn24 addTime(TimeIn24 &object1, TimeIn24 &object2);
    TimeIn24 increment(TimeIn24 &object1);
};
#endif // TIMEIN24_H
