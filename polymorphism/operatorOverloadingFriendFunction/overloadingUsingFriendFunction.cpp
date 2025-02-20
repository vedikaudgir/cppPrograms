#include <iostream>
using namespace std;

class OverloadingUsingFriendFunction
{
private:
    int n1, n2;

public:
    void setData(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    void getData()
    {
        cout << "\nn1 = " << n1 << " n2 = " << n2;
    }
    
    friend void operator++(OverloadingUsingFriendFunction &obj1)
    {
        ++obj1.n1;
        ++obj1.n2;
    }
    friend void operator++(OverloadingUsingFriendFunction &obj1, int)
    {
        obj1.n1++;
        obj1.n2++;
    }
    friend OverloadingUsingFriendFunction operator+(OverloadingUsingFriendFunction &obj1, OverloadingUsingFriendFunction &obj2)
    {
        OverloadingUsingFriendFunction sum;
        sum.n1 = obj1.n1 + obj2.n1;
        sum.n2 = obj1.n2 + obj2.n2;
        return sum;
    }
    friend bool operator>(OverloadingUsingFriendFunction &obj1, OverloadingUsingFriendFunction &obj2)
    {
        return ((obj1.n1 > obj2.n1 && obj1.n2 > obj2.n2) ? true : false);
    }
    friend bool operator<(OverloadingUsingFriendFunction &obj1, OverloadingUsingFriendFunction &obj2)
    {
        return ((obj1.n1 < obj2.n1 && obj1.n2 < obj2.n2) ? true : false);
    }

    OverloadingUsingFriendFunction() {}
    ~OverloadingUsingFriendFunction() {}
};
int main()
{
    OverloadingUsingFriendFunction obj1, obj2, sum;
    obj1.setData(4, 5);
    obj1++;
    obj1.getData();
    ++obj1;
    obj1.getData();
    obj2.setData(3, 2);
    obj2.getData();
    sum = obj1 + obj2;
    sum.getData();
    obj1 > obj2 ? obj1.getData() : obj2.getData();
}
