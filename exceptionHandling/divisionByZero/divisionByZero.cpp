//program for execption handling in Cpp to check zero case of denominator.
//Author - Vedika Udgir.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "\nEnter number 1: ";
    cin >> a;
    cout << "\nEnter number 2: ";
    cin >> b;

    cout << "\nThe sum of numbers: " << a + b;
    cout << "\nThe difference of numbers: " << a - b;
    cout << "\nThe product of numbers: " << a * b;
    try
    {
        if (b == 0)
        {
            throw "Denominator cannnot be zero!";
        }
        cout << "\nThe division of numbers: " << a / b;
    }
    catch (const char *error)
    {
        cout << "Error found: " << error;
    }
}
