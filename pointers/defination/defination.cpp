#include <iostream>
using namespace std;

int a = 5;
char b = 'v';
int* ptrInt = &a;
char* ptrChr = &b;

int main()
{
    cout << endl << a;
    cout << endl << b;
    cout << endl << &a;
    cout << endl << &b;
    cout << endl << ptrInt;
    cout << endl << ptrChr;
    cout << endl << *ptrInt;
    cout << endl << *ptrChr;
}

//wild pointer - uninitialised pointer.
//null pointer - pointing at zero
//void pointer - datatype can be defined later.