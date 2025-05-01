#include <iostream>
#include <cstring>
using namespace std;

class NameSurname
{
private:
    string name = "Satoru";
    string surname = "Gojo";

public:
    friend ostream& operator<<(ostream& obj1, NameSurname& obj2) 
    {
        obj1 << "\nPrinting from class \"NameSurname\"\n" << "\nName is: " << obj2.name << "\nSurname is: " << obj2.surname;
        return obj1;
    }
    NameSurname(){}
    ~NameSurname(){}

    friend istream& operator >>(istream& obj1, NameSurname& obj2)
    {
        cout << "\nEnter newName:";
        cin >> obj2.name;
        cout << "\nEnter newSurname:";
        cin >> obj2.surname;
        return obj1;
    }
}myObj;

int main()
{
    cout << myObj;
    cin >> myObj;
    cout << myObj;
}
