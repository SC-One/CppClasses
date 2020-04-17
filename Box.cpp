#include "Box.h"


Box::Box(double l, double w, double h)
{
    length=l;
    width=w;
    height=h;
}

double Box::volume()
{
    return length*height*width;
}
