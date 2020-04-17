#include "Cube.h"
Cube::Cube(double aSide):side{aSide}
{
}

double Cube::volume()
{
    return side*side*side;
}

bool Cube::hasLargerVolumeThan(Cube aCube)
{
    return volume()>aCube.volume();
}
