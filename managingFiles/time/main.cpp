#include "timeIn24.h"
#include "timeIn12.h"
using namespace std;

int main()
{
    cout << "\nTime in 24-hour format - \n";
    TimeIn24 obj1_24, obj2_24, add24, inc24;
    obj1_24.readTime();
    obj1_24.printTime();
    obj2_24.readTime();
    obj2_24.printTime();
    add24 = add24.addTime(obj1_24, obj2_24);
    add24.printTime();
    inc24 = inc24.increment(add24);
    inc24.printTime();

    cout << "\n\nTime in 12-hour format - \n\n";
    TimeIn12 obj1_12, obj2_12, add12;
    obj1_12.readTime();
    obj1_12.printTime();
    obj2_12.readTime();
    obj2_12.printTime();
    add12 = add12.addTime(obj1_12,obj2_12);
    add12.printTime();

    return 0;
}