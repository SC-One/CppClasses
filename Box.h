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

    /*      @@ Note @@
    // copy constructor for any classes must be like this:

    Type::Type(const Type& object)
    {
        // Code to duplicate the object...
    }

    */

    Box(const Box &box);   // copy constructor
    double volume();
};

#endif // BOX_H
