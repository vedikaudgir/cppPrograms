//Program in cpp to implement basic binary operator overloading.
//Author - Vedika Udgir

#include <iostream>
using namespace std;

class BinaryOperators
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
    BinaryOperators operator +(BinaryOperators obj2)
    {
        BinaryOperators sum;
        sum.n1 = n1 + obj2.n1;
        sum.n2 = n2 + obj2.n2;
        return sum;
    }
    BinaryOperators(){}
    BinaryOperators(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    ~BinaryOperators(){}
};

int main()
{
    BinaryOperators obj1, obj2(4,2), obj3;
    obj1.setData(5,7);
    obj1.getData();
    obj2.getData();
    obj3 = obj1 + obj2;
    obj3.getData();
}
