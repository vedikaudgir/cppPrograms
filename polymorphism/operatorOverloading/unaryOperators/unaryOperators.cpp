#include <iostream>
using namespace std;

class UnaryOperators
{
private:
    int n1,n2;
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
    void operator ++()
    {
        n1++;
        n2++;
    }
    void operator ++(int)
    {
        ++n1;
        ++n2;
    }
    UnaryOperators(){}
    UnaryOperators(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    ~UnaryOperators(){}
};

int main()
{
    UnaryOperators obj;
    obj.setData(5,7);
    obj.getData();
    ++obj;
    obj.getData();
    obj++;
    obj.getData();
}
