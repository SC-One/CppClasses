#include<iostream>
#include"Box.h"
int main()
{
    Box box1{2,5,3};
    std::cout<<box1.volume()<<std::endl;
    box1.setWidth(1).setHeight(2).setLength(3);
    std::cout<<box1.volume()<<std::endl;
    return 0;
}
