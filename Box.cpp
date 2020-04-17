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
double Box::volume()
{
    return height*width*length;
}
