#include <iostream>
using namespace std;

class RelationalOperators
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
    bool operator >(RelationalOperators &obj2)
    {
        if (n1 > obj2.n1 && n2 > obj2.n2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator <(RelationalOperators &obj2)
    {
        if (n1 < obj2.n1 && n2 < obj2.n2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    RelationalOperators() {}
    RelationalOperators(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    ~RelationalOperators() {}
};

int main()
{
    RelationalOperators obj1(6,5),obj2(5,6),obj3(2,3),obj4(1,2);
    obj1 > obj2 ? obj1.getData() : obj2.getData();
    obj2 > obj1 ? obj1.getData() : obj2.getData();
    obj3 > obj2 ? obj1.getData() : obj2.getData();
    obj3 > obj4 ? obj1.getData() : obj2.getData();    
}
