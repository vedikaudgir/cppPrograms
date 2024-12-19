#include <iostream>
#include "polarCoordinates.h"
using namespace std;

void PolarCoordinates ::readCoordinates()
{
    cout << endl
         << "Enter radius - ";
    cin >> r;
    cout << endl
         << "Enter angle with positive real axis";
    cin >> theta;
}

void PolarCoordinates ::printCoordinates()
{
    cout << endl
         << "The co-ordinates are - "
         << "( "
         << r
         << ", "
         << theta
         << " )";
}
