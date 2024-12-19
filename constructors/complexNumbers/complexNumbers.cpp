#include <iostream>
using namespace std;

class ComplexNumbers
{
    int realPart, imaginaryPart;

public:
    void read();
    void print();
    ComplexNumbers();
    ComplexNumbers(int a);
    ComplexNumbers(int a, int b);
    ComplexNumbers(ComplexNumbers &);
    ~ComplexNumbers(){
        cout << endl<<"Destructing "<<realPart<<"+i"<<imaginaryPart;
    }
};

void ComplexNumbers ::read()
{
    cout << endl
         << "Enter the real part - ";
    cin >> realPart;
    cout << endl
         << "Enter the imaginary Part - ";
    cin >> imaginaryPart;
}

void ComplexNumbers ::print()
{
    cout << endl
         << "The complex Number is - "
         << endl
         << realPart
         << " + "
         << imaginaryPart
         << "i";
}

ComplexNumbers ::ComplexNumbers()
{
    realPart = 0;
    imaginaryPart = 0;
    cout << endl<<"Constructing "<<realPart<<"+i"<<imaginaryPart;
}

ComplexNumbers ::ComplexNumbers(int rp, int ip)
{
    realPart = rp;
    imaginaryPart = ip;
    cout << endl<<"Constructing "<<realPart<<"+i"<<imaginaryPart;
}

ComplexNumbers ::ComplexNumbers(ComplexNumbers &object2)
{
    realPart = object2.realPart;
    imaginaryPart = object2.imaginaryPart;
    cout << endl<<"Copy Constructing "<<realPart<<"+i"<<imaginaryPart;
}

int main()
{
    ComplexNumbers x(10, 20);
    ComplexNumbers object1, object2 = x;
    object2 = object1;
    object1.print();
    object2.print();
    return 0;
}