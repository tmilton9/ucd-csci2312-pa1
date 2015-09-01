//
// Created by Travis Milton 9/1/2015.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"

using namespace std;

double computeArea(Point &a, Point &b, Point &c);  //prototype

int main(void) {
    double x, y, z = 0.0;       //placeholder values

    cout << "Enter Three Points to compute the area :" << endl << "Point 1 x: ";
    cin >> x;
    cout << "        y: ";
    cin >> y;
    cout << "        z: ";
    cin >> z;

    Point a(x,y,z);     //first point constructor

    cout << "Point 2 x: ";
    cin >> x;
    cout << "        y: ";
    cin >> y;
    cout << "        z: ";
    cin >> z;

    Point b(x,y,z);     //second point constructor

    cout << "Point 3 x: ";
    cin >> x;
    cout << "        y: ";
    cin >> y;
    cout << "        z: ";
    cin >> z;

    Point c(x,y,z);     //third point constructor
    cout << fixed << showpoint << setprecision(2) <<

    "The area between the three points is " << computeArea(a,b,c);

    return 0;

}


double computeArea(Point& a, Point& b, Point& c)
{

    double sideA = a.distanceTo(b);   //finds side one
    double sideB = a.distanceTo(c);   //finds side two
    double sideC = b.distanceTo(c);   //finds side three

    double s = (sideA + sideB + sideC)/2;   //herons formula for the area of a triangle

    return sqrt(s * (s - sideA)*(s-sideB)*(s-sideC));


}