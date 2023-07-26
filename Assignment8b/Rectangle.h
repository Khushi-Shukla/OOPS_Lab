#pragma once
#include "Shape.h"
#include "Point2d.h"
class Rectangle: public Shape
{
	Point2d lt;
	double w, h;

public:
	Rectangle(size_t, Point2d, double, double);
	
	double get_area() { return w * h; }
};

