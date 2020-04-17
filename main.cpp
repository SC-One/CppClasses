#include<iostream>
#include"Box.h"

int main()
{
    Box one(10,2,3);
    Box two;
    Box three{2,3,4};
    std::cout<< one.volume() <<std::endl;
    std::cout<<two.volume()<<std::endl;
    std::cout<<three.volume()<<std::endl;

    Box four{1,3,5};
    auto cap{four.volume()};
    std::cout<<cap<<std::endl;
    return 0;
}
