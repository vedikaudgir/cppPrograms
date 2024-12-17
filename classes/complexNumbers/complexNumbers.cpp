#include <iostream>
using namespace std;

class ComplexNumbers
{
    private:
    int realPart,imaginaryPart;

    public:
    void readComplexNumber()
    {
        cout<<endl<<"Enter the real part - ";
        cin>>realPart;
        cout<<endl<<"Enter the imaginary part - ";
        cin>>imaginaryPart;
    }
    void printComplexNumbers()
    {
        cout<<endl<<"The complex Number is - "<<endl<<realPart<<" + "<<imaginaryPart<<"i";
    }

};

int main()
{
    ComplexNumbers objectToComplexNumbers;
    objectToComplexNumbers.readComplexNumber();
    objectToComplexNumbers.printComplexNumbers();
    return 0;
}