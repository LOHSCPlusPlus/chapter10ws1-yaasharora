#include "Line.h"
using namespace std;

Line::Line(Point s, Point e) {
  start = s;
  end = e;
}

void Line::print() {
  start.print();
  end.print();
}

double LineLength();