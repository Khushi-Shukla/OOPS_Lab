#include "Point2d.h"

Point2d::Point2d(double xx, double yy)
{
	x=xx;
	y= yy;
}

double Point2d::getValueX() { return x; }
double Point2d::getValueY() { return y; }
