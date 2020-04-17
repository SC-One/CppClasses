#include<iostream>
#include "Box.h"

Box::Box(double lv, double wv, double hv):length{lv},width{wv},height{hv}
{
}

Box::Box(double side):Box{side,side,side}
{
}

Box::Box(const Box &box):Box{box.length, box.width, box.height}     // implementation copy-constructor by us.
{

}
double Box::volume()
{
    return height*width*length;
}

Box &Box::setLength(double lv)
{
    if (lv>0) length=lv;
    return  *this;
}

Box &Box::setWidth(double wv)
{
    if (wv>0) width=wv;
    return  *this;
}

Box &Box::setHeight(double hv)
{
    if (hv>0) height=hv;
    return  *this;
}
