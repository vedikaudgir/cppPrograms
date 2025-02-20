#include <iostream>
using namespace std;

class UDT
{
private:
    int n;
public:
    void setData(int x)
    {
        n = x;
    }
    void getData()
    {
        cout << "\nn = " << n;
    }
    operator int()
    {
        return n;
    }

    UDT(){}
    UDT(int x)
    {
        n = x;
    }
    ~UDT(){}
};

int main()
{
    UDT obj = 5;
    obj.getData();
    int num = obj;
    cout << endl << num;
}
