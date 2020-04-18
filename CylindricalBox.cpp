#include "CylindricalBox.h"

CylindricalBox::CylindricalBox(double aRadius, double aHeight, std::string_view aMaterial):radius{aRadius},height{aHeight},material{aMaterial}
{
}

double CylindricalBox::volume() const
{
    return this->PI*radius*radius*height;
}
