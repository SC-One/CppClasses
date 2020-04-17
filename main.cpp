#include<iostream>
#include"Box.h"
int main()
{
    Box box1{2};
    Box box2{1,2,3};
    Box copyBox1{box1};     // copy constructor by compiler created. all member variables (fields) will copy in new object.
    std::cout<<box1.volume()<<std::endl;
    std::cout<<box2.volume()<<std::endl;
    std::cout<<copyBox1.volume()<<std::endl;
    return 0;
}
