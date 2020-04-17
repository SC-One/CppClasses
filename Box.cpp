#include<iostream>
#include "Box.h"

Box::Box(double lv, double wv, double hv):length{lv},width{wv},height{hv}
{
    std::cout<<"constrctor 1 called.\n";
}

Box::Box(double side):Box{side,side,side}
{
    std::cout<<"constrctor 2 called.\n";
}

Box::Box(const Box &box):Box{box.length, box.width, box.height}     // implementation copy-constructor by us.
{

}
double Box::volume()
{
    return height*width*length;
}
