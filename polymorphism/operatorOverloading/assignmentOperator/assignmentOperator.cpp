#include <iostream>
using namespace std;

class AssignmentOperator
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

    void operator =(AssignmentOperator &obj2)
    {
        n1 = obj2.n1;
        n2 = obj2.n2;
    }
    AssignmentOperator(){}
    AssignmentOperator(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    ~AssignmentOperator(){}
};

int main()
{
    AssignmentOperator obj, obj2;
    obj.setData(5,7);
    obj2 = obj;
    obj2.getData();
    obj.getData();
}
