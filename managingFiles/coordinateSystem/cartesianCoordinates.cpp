#include <iostream>
#include "cartesianCoordinates.h"
using namespace std;

void cartesianCoordinates ::readCoordinates()
{
    cout << endl
         << "Enter abcissa - ";
    cin >> abcissa;
    cout << endl
         << "Enter ordinate";
    cin >> ordinate;
}

void cartesianCoordinates ::printCoordinates()
{
    cout << endl
         << "The co-ordinates are - "
         << "( "
         << abcissa
         << ", "
         << ordinate
         << " )";
}

cartesianCoordinates cartesianCoordinates :: addCoordinates(cartesianCoordinates &object1, cartesianCoordinates &object2)
{
     cartesianCoordinates sum;
     sum.abcissa = object1.abcissa + object2.abcissa;
     sum.ordinate = object1.ordinate + object2.ordinate;

     return sum;
}

