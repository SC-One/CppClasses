#ifndef BOX_H
#define BOX_H


class Box
{
private:
    double length{1},width{1},height{1};
public:
    Box()=default;
    Box(double lv,double wv, double hv=2); // you can also difine default values.
    explicit Box(double side);// cube box.    // cause of that single argument constructor we added explicit to prevent of implicit conversation by compiler.
    double volume();
};

#endif // BOX_H
