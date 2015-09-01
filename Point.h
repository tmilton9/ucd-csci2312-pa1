//created by Travis Milton 9/1/2015
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;                               // first dimension
    double y;                               // second dimension
    double z;                               // third dimension

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // Member function
    double distanceTo(const Point& a);   // distance call prototype
};

#endif // __point_h