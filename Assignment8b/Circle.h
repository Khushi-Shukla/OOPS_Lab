#pragma once
#include "Shape.h"
#include "Point2d.h"
#define PI 3.21

class Circle: public Shape
{
public:
	Circle(size_t uid_, Point2d centre_, double radius_);
	double get_area();
protected:
	Point2d center;
	double radius;
};

