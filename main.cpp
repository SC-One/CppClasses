#include<iostream>
#include"Box.h"

int main()
{
    Box flexBox{2,3,4};
    flexBox.printBox();
    flexBox.printBox();
    flexBox.printBox();
    Box constBox{1,2,3};
    constBox.printBox();
    constBox.printBox();
    constBox.printBox();
    constBox.printBox();
    constBox.printBox();
    return 0;
}
