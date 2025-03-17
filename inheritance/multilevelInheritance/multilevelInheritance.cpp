#include <iostream>
using namespace std;

class d1
{
public:
    d1()
    {
        cout << endl << "d1 -> ";
    }
    ~d1()
    {
        cout << "\nd1 destructed";
    }
};
class d2 : public d1
{
public:
    d2()
    {
        cout << "d2 -> ";
    }
    ~d2()
    {
        cout << "\nd2 destructed";
    }
};
class d3 : public d2
{
public:
    d3()
    {
        cout << "d3 ";
    }
    ~d3()
    {
        cout << "\nd3 destructed";
    }
};

int main()
{
    d3 obj3;
    cout << endl << "Executed";
    return 0;
}