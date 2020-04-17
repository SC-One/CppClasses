#include<iostream>
#include"Box.h"
int main()
{
    Box box1{2};
    Box box2{1,2,3};
    Box copyBox1{box1};     // copy constructor by compiler created. all member variables (fields) will copy in new object.
    // but it has a problem : if members be pointers! , cant duplicate it or maybe cant be expected for us!
    // suppos your member variable is pointer to string. if you modify second object variable member , first object will modify its variable too , because
    // it was a pointer to a string.
    std::cout<<box1.volume()<<std::endl;
    std::cout<<box2.volume()<<std::endl;
    std::cout<<copyBox1.volume()<<std::endl;
    return 0;
}
