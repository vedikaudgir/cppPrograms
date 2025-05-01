#include <iostream>
#include <cstring>
using namespace std;

class printFunction
{
private:   
    string name = "Satoru";
public:

    friend ostream & operator<<(ostream &out, printFunction& obj)
    {
        out << "\nPrinting...\n" << "Name is : " << obj.name;
        return out;
    }
    printFunction(){}
    ~printFunction(){}
}name;

int main()
{
    cout << name;
}