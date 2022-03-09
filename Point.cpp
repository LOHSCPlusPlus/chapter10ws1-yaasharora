#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point() {
    x = 0.0;
    y = 0.0;
}
Point::Point(double xVal, double yVal) {
  x = xVal;
  y = yVal;

}

//double Point::getX() {
  //print(x);
  //}

//double Point::getY() {
   //print(y);
  //}
// Point = name of class
  //getX = function definition
//:: = whatever is after belongs to the class

//void Point::setX(double xVal) {
    //x = xVal;
//}
//void Point::setY(double yVal) {
    //y = yVal;
  //}

void Point::print() {
   cout << "x: " << x << " " << "y: " << y << endl;
}
double Point::calcDistance(Point other) {
double xVal = pow(x - other.x, 2);
double yVal = pow(y - other.y, 2);
double dist = sqrt(xVal + yVal);
return dist;
}