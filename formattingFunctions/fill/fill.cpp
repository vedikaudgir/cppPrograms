#include<iostream>
using namespace std;

int main()
{
    float a = 7.12;

    cout.width(8);
    cout.fill('0');
    cout.precision(4);
    cout << a << endl;
}