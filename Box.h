#ifndef BOX_H
#define BOX_H


class Box
{
private:
    double length{1},width{1},height{1};
public:
    Box()=default;
    Box(double lv,double wv, double hv=2);
    explicit Box(double side);
    Box(const Box &box);
    double volume();

    // @@ Accessors @@
    double getLength(){return length;}
    double getWidth(){return width;}
    double getHeight(){return height;}

    // @@ Mutators @@
    Box& setLength(double lv);
    Box& setWidth(double wv);
    Box& setHeight(double hv);



};

#endif // BOX_H
