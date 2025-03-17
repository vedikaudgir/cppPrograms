#include <iostream>
using namespace std;

class d1
{
public:
    d1()
    {
        cout << endl
             << "d1 ";
    }
    ~d1()
    {
        cout << "\nd1 destructed";
    }
};
class d2
{
public:
    d2()
    {
        cout << "d2 ";
    }
    ~d2()
    {
        cout << "d2 destructed";
    }
};
class c : public d1, public d2
{
public:
    c()
    {
        cout << endl
             << "c";
    }
    ~c()
    {
        cout << "\nc destructed";
    }
};

int main()
{
    c obj3;
    cout << endl
         << "Executed";
    return 0;
}