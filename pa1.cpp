#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;
double computeArea(Point& a, Point& b, Point& c);
int main(void) {
    double x,y,z=0.0;
    cout << "Enter Three Points to compute the area : point 1 x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    Point a(x,y,z);


    cout << "point 2 x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;

    Point b(x,y,z);


    cout << "point 3 x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    Point c(x,y,z);

    cout << "The area between the three points is " << computeArea(a,b,c);

    return 0;

}


double computeArea(Point& a, Point& b, Point& c){

    double sideA = a.distanceTo(a,b);

    double sideB = a.distanceTo(a,c);

    double sideC = b.distanceTo(b,c);

    double s = (sideA + sideB + sideC)/2;

    return sqrt(s * (s - sideA)*(s-sideB)*(s-sideC));

}