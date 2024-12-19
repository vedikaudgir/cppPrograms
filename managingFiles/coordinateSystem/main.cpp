#include "polarCoordinates.h"
#include "cartesianCoordinates.h"

int main()
{
    PolarCoordinates polarobj1;
    polarobj1.readCoordinates();
    polarobj1.printCoordinates();

    cartesianCoordinates cartesianobj1;
    cartesianobj1.readCoordinates();
    cartesianobj1.printCoordinates();
    
    return 0;
}