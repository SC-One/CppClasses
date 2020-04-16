#include<iostream>

class Box
{
private:
    double length{1};
    double width{1};
    double height{1};
public:
    Box(double l,double w, double h)
    {
        length=l;
        width=w;
        height=h;
    }
    Box()=default; // you can use box(){} too but it's better to use default keyword in modern C++.
    double volume(){return length*height*width;}

};

int main()
{
    Box one(10,2,3);
    Box two;        // if you didnt define default default constructor , you get error.
                    // and it's better use default keyword(line 16) , its preferedin modern C++.
    std::cout<< one.volume() <<std::endl;
    std::cout<<two.volume()<<std::endl;
    return 0;
}
