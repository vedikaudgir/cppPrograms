#include <iostream>
using namespace std;

int a = 5;
char b = 'v';
int* ptrInt = &a;
char* ptrChr = &b;

int main()
{
    cout << endl << "a = " << a;
    cout << endl << "ptrInt = " << ptrInt;
    cout << endl << "value at ptrInt = " << *ptrInt;
    cout << endl << "++ptrInt = " << ++ptrInt;
    cout << endl << "++(*ptrInt) = " << ++(*ptrInt);
    cout << endl << "ptrInt + 4 = " << ptrInt + 4;
    cout << endl << "ptrInt - 4 = " << ptrInt - 4;
    cout << endl << "(*ptrInt) + 4 = " << (*ptrInt) + 4;
    cout << endl << "(*ptrInt) - 4 = " << (*ptrInt) - 4;
    cout << endl << "*(ptrInt + 4) = " << (ptrInt + 4);
    cout << endl << "*(ptrInt - 4) = " << (ptrInt - 4);
    cout << endl << "*ptrInt / 4 = " << *ptrInt / 4;
}