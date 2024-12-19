#ifndef CARTESIANCOORDINATES_H
#define CARTESIANCOORDINATES_H
#include <iostream>
using namespace std;

class cartesianCoordinates
{
    int abcissa, ordinate;

    public:
    void readCoordinates();
    void printCoordinates();
    cartesianCoordinates addCoordinates(cartesianCoordinates &object1, cartesianCoordinates &object2);
};

#endif // CARTESIANCOORDINATES_H