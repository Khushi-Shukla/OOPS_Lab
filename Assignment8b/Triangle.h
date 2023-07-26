#pragma once
#include "Shape.h"
#include "Point2d.h"
class Triangle: public Shape
{
public:
	Triangle(size_t uid_, Point2d v1_, Point2d v2_, Point2d v3_);
	double get_area();
	
protected:
	Point2d v1, v2, v3;

};

