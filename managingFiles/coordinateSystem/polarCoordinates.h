#ifndef POLARCOORDINATES_H
#define POLARCOORDINATES_H
#include <iostream>
using namespace std;

class PolarCoordinates
{
    int r, theta;

    public:
    void readCoordinates();
    void printCoordinates();
};

#endif // POLARCOORDINATES_H