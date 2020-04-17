#ifndef CUBE_H
#define CUBE_H

class Cube
{
private:
    double side;
public:
//    Cube()=default;
    Cube(double aSide);
    double volume();
    bool hasLargerVolumeThan(Cube aCube);
};

#endif // CUBE_H
