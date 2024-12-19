#include <iostream>
using namespace std;

class String
{
    char *string;

public:
    String()
    {
    }

    String(const char *s)
    {
        string = new char(sizeof(s) + 1);
        strcpy(string, s);
    }
    void readName()
    {
        cout << endl
             << "Enter any text ";
        cin >> string;
    }
    void print()
    {
        cout << endl
             << "String is " << string;
    }
    void setString(const char *s)
    {
        string = new char(sizeof(s) + 1);
        strcpy(string, s);
    }
    const char *getString()
    {
        return string;
    }
    String operator+=(String str2)
    {
        String res;
        res.string = strcat(string, str2.string);
        return res;
    }
};

int main()
{
    String name = "sirhon", lastName = "helsinky";
    name += lastName;
    cout << name.getString();
    return 0;
}