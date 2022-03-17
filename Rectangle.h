#include "Line.h"

class Rectangle {
public:
Rectangle();
Rectangle(Line l, Line h);
void print();
double calcArea();


private:
Line length;
Line height;

};

