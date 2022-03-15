#include "Point.h"

class Line {
public:
Line();
Line(Point s, Point e);
double LineLength(double calcDistance);
void print();

private:
Point start;
Point end;
};
