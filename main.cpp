#include<iostream>
#include"Box.h"
int main()
{
    Box box1{2,5,3};
    std::cout<<box1.volume()<<std::endl;
    box1.setWidth(1);
    box1.setHeight(10);
    box1.setLength(5);
    std::cout<<box1.volume()<<std::endl;
    box1.setHeight(-20);        // cant modify because our mutator(setter) dont allow it to be negative
    std::cout<<box1.volume()<<std::endl;


    return 0;
}
