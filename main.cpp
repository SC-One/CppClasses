#include<iostream>
#include"Box.h"

int main()
{
    Box flexBox{2,3,4};
    Box one{2},two{3,2,5};
    const Box constBox[5]{two,one,flexBox};
    std::cout<<"How many box created? "<<constBox[0].getObjCount();
    Box fake1,fake2;
    std::cout<<"\nHow many box created? "<<fake1.getObjCount()<<std::endl;
    // all const and non-const boxes will counting by static member variable.
    return 0;
}
