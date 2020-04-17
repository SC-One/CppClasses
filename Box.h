#ifndef BOX_H
#define BOX_H


class Box
{
private:
    double length{1};
    double width{1};
    double height{1};
public:
    Box()=default;
    Box(double l,double w, double h);
    double volume();

};

#endif // BOX_H
