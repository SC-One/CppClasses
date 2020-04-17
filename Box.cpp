#include "Box.h"


Box::Box(double l, double w, double h):length{l},width{w},height{h} // member initializer list.
{
    // body code eliminated by member initializer list.
    // Note: member initializer list is better than assignment , because in assignment the object at first creating and after that assignment carry out.
}

double Box::volume()
{
    return length*height*width;
}
