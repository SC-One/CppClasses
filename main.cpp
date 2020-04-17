#include<iostream>
#include"Box.h"
int main()
{
    Box box1{2,5,3};
    std::cout<<box1.getLength()<<std::endl;
    std::cout<<box1.getWidth()<<std::endl;
    std::cout<<box1.getHeight()<<std::endl;
    std::cout<<box1.volume()<<std::endl;


    return 0;
}
