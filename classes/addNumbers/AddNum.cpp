#include <iostream>
using namespace std;


class AddNumbers
{
    private:
    int num1,num2,sum;
    public:
    void readNumbers()
    {
        cout<<"\nEnter first Number - ";
        cin>>num1;
        cout<<"\nEnter second Number - ";
        cin>>num2;
    }
    void printNumbers()
    {
        cout<<endl<<"First number is - "<<num1<<"\nSecond Number is - "<<num2;
    }
    void addNumbers()
    {
        sum = num1 + num2;
    }
    void printResult()
    {
        cout<<"\nThe sum of the numbers is - "<<sum; 
    }
};

int main(void)
{
    AddNumbers objectToAdd;
    objectToAdd.readNumbers();
    objectToAdd.printNumbers();
    objectToAdd.addNumbers();
    objectToAdd.printResult();
    return 0;
}