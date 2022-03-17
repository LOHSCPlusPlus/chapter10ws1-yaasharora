#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {


Point a(1,1);
Point b(1,8);
Line l(a,b);

Point c(5,1);
Point d(5,8);
Line h(c,d);

Rectangle r(l, h);
  r.print();

  cout << "The length of line l is " << l.lineLength() << endl;
  cout << "The length of line h is " << h.lineLength() << endl;
  cout << "The area is " << r.calcArea() << endl;

  return 0;
}
