#include<iostream>
#include"Box.h"
int main()
{
    Box box1{10};   // delegate constructor.
    Box box2{2,4};// cause of default value for height , height will be 2.
    Box box3{3,2,2};
    std::cout<<box1.volume()<<std::endl;
    std::cout<<box2.volume()<<std::endl;
    std::cout<<box3.volume()<<std::endl;
    return 0;
}
