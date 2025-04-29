//Using friend class to access private members.
//Author - Vedika Udgir.

#include <iostream>
using namespace std;

class A
{
private:
    string secret = "Gojo Satoru";
public:
    friend class B;
};

class B
{
public:
    void revealSecret(A obj)
    {
        cout << "\nSecret of A is: " << obj.secret;
    }    
};

int main()
{
    A a;
    B b;
    b.revealSecret(a);
}
