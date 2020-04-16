#include<iostream>

class Box
{
private:
    double length{1};
    double width{1};
    double height{1};
public:
    double volume(){return length*height*width;}

};

int main()
{
    Box one;
    std::cout<< one.volume() <<std::endl;
    return 0;
}
