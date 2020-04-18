#ifndef CYLINDRICALBOX_H
#define CYLINDRICALBOX_H
#include<string_view>

class CylindricalBox
{
private:
    inline static const float PI{3.141592f};
    double radius{1},height{1};
    std::string_view material{defaultMaterial};
public:
    inline static const float maxRadius{35.0f};
    inline static const float maxHeight{60.0f};
    inline static const std::string_view defaultMaterial{"paperboard"};

    CylindricalBox()=default;
    CylindricalBox(double radius, double height, std::string_view material=defaultMaterial);
    double volume() const;
};

#endif // CYLINDRICALBOX_H
