#include<iostream>
#include"Box.h"

int main()
{
    const Box constBox{2,5,3};
    // const object cant call non-const functions in class. we should add const to their methods that dont modify object.[go in header file and check it]
    std::cout<<constBox.getWidth()<<std::endl;
    std::cout<<constBox.volume()<<std::endl;
    Box flexBox{3,2,4};
    std::cout<<flexBox.getWidth()<<std::endl;
    std::cout<<flexBox.volume()<<std::endl;

    flexBox.setWidth(10);
//    constBox.setWidth(10);        // cant compile because our object is const.

    return 0;
}
