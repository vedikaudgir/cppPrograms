#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a1(5, 0);
    vector<char> a2 = {'A', 'B'}; 
    vector<string> a3 = {"Gojo", "Yuta", "Yuji"};

    cout << "a1: ";
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1.at(i) << "  ";
    }
    cout << endl;

    cout << "a2: ";
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2.at(i) << "  ";
    }
    cout << endl;

    cout << "a3: ";
    for (int i = 0; i < a3.size(); i++)
    {
        cout << a3.at(i) << "  ";
    }
    cout << endl;

    return 0;
}
