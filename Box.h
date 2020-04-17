#ifndef BOX_H
#define BOX_H


class Box
{
private:
    double length{1},width{1},height{1};
    mutable unsigned int count{0};
public:
    Box()=default;
    Box(double lv,double wv, double hv=2);
    explicit Box(double side);
    Box(const Box &box);

    void printBox() const;
    double volume() const;

    // @@ Accessors @@
    double getLength() const{return length;}
    double getWidth() const{return width;}
    double getHeight() const{return height;}

    // @@ Mutators @@
    Box& setLength(double lv);
    Box& setWidth(double wv);
    Box& setHeight(double hv);



};

#endif // BOX_H
