// Program in cpp to add two numbers.
// Author - Vedika Udgir.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width, perimeter, area;

public:
    void readDimentions()
    {
        cout << "\nEnter length - ";
        cin >> length;
        cout << "\nEnter width - ";
        cin >> width;
    }
    void printDimentions()
    {
        cout << endl
             << "\nLength is - " << length << "\nWidth is - " << width;
    }
    int CalculatePerimeter()
    {
        perimeter = 2 * (length + width);
        return perimeter;
    }
    int CalculateArea()
    {
        area = length * width;
        return area;
    }
};

int main(void)
{
    Rectangle rectObj;
    rectObj.readDimentions();
    rectObj.printDimentions();
    cout << endl
         << "The perimeter is - " << rectObj.CalculatePerimeter();
    cout << endl
         << "The area is - " << rectObj.CalculateArea();
    return 0;
}