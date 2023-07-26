#include"Circle.h"

Circle::Circle(size_t uid_, Point2d centre_, double radius_)
{
	//Q2. Initialized all the data member of this class. Don't delete this line 
	this->uid = uid_;
	this->center = centre_;
	this->radius = radius_;
}

double Circle::get_area() { return 2 * PI * radius; }
