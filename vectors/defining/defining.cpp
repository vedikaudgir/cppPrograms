#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a1(5, 0);
    vector<char> a2;
    vector<string> a3;

    int i = 0;
    while (i < a1.size())
    {
        cout << a1.at(i) << "  ";
        i++;
    }

    cout << endl;
    i = 0;
    a2.push_back('s');
    a2.push_back('a');
    a2.push_back('t');
    a2.push_back('o');
    a2.push_back('r');
    a2.push_back('u');

    while (i < a2.size())
    {
        cout << a2.at(i) << "  ";
        i++;
    }

    a2.push_back(' ');
    a2.push_back('g');
    a2.push_back('o');
    a2.push_back('j');
    a2.push_back('o');

    cout << endl;
    i = 0;
    while (i < a2.size())
    {
        cout << a2.at(i);
        i++;
    }

    cout << endl;
    i = 0;

    a3.push_back("Satoru");
    a3.push_back("Gojo.");
    while (i < a3.size())
    {
        cout << a3.at(i) << "  ";
        i++;
    }
}