#include <iostream>
using namespace std;

class d1
{
public:
    d1()
    {
        cout << endl << "d1 ";
    }
    ~d1()
    {
        cout << "\nd1 destructed";
    }
};

class c1 : public d1
{
public:
    c1()
    {
        cout << endl << "c1";
    }
    ~c1()
    {
        cout << "\nc1 destructed";
    }
};

class c2 : public d1
{
public:
    c2()
    {
        cout << endl << "c2";
    }
    ~c2()
    {
        cout << "\nc2 destructed";
    }
};

class gc1 : public c1
{
public:
    gc1()
    {
        cout << endl << "gc1";
    }
    ~gc1()
    {
        cout << "\ngc1 destructed";
    }
};

class gc2 : public c2
{
public:
    gc2()
    {
        cout << endl << "gc2";
    }
    ~gc2()
    {
        cout << "\ngc2 destructed";
    }
};

int main()
{
    gc1 obj1;
    gc2 obj2;
    cout << endl << "Executed";
    return 0;
}