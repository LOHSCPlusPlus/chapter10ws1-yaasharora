#include "Rectangle.h"

Rectangle::Rectangle(Line l, Line h) {
  length = l;
  height = h;
}

void Rectangle::print() {
  length.print();
  height.print();
  }
double Rectangle::calcArea() {
  int area = length.lineLength() * height.lineLength();
  return area;
}
