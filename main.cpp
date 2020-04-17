#include<iostream>
#include"Cube.h"

int main()
{
    Cube box1{7};
    Cube box2{3};
    if (box1.hasLargerVolumeThan(box2))
        std::cout << "box1 is larger than box2." << std::endl;
    else
        std::cout << "Volume of box1 is less than or equal to that of box2." << std::endl;

    std::cout << "volume of box1 is " << box1.volume() << std::endl;

//    if (box1.hasLargerVolumeThan(50.0))         // it's like that: if (box1.hasLargerVolumeThan(Cube{50.0})) ... but we didnt want that! we want to check 343>50? how fix it? next commit.
        // top line cant compile anymore because we added explicit to prevent implicit conversation in constructor.

    if(box1.hasLargerVolumeThan(Cube{50}))  // with explicit compiler prevent to compile if you dont write Cube{50}.
        std::cout << "Volume of box1 is greater than 50"<< std::endl;
    else
        std::cout << "Volume of box1 is less than or equal to 50"<< std::endl;

    return 0;
}


// caution: By default, you should therefore declare all single-argument constructors as explicit to prevent implicit conversations.
