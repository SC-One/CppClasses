#include<iostream>
#include"CylindricalBox.h"

int main()
{
    CylindricalBox bigBox{ 1.23f, CylindricalBox::maxHeight, CylindricalBox::defaultMaterial };
    std::cout<<CylindricalBox::maxHeight<<std::endl<<CylindricalBox::maxRadius<<std::endl<<CylindricalBox::defaultMaterial<<std::endl;
    return 0;
}
