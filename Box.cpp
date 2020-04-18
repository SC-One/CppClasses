#include<iostream>
#include "Box.h"

Box::Box()
{
    ++objCount;
}

Box::Box(double lv, double wv, double hv):length{lv},width{wv},height{hv}
{
    objCount++;
}

Box::Box(double side):Box{side,side,side}
{
}

Box::Box(const Box &box):Box{box.length, box.width, box.height}     // implementation copy-constructor by us.
{
}

void Box::printBox() const
{
    std::cout<<"L: "<<length<<"\t"<<width<<"\t"<<height<<"\nVolume:"<<volume()<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Thix box has printed as "<<++count<<" time(s).\n";
    // if we didnt define count as mutable , it couldnt compile within const member function because it's modifying.
}
double Box::volume() const
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
