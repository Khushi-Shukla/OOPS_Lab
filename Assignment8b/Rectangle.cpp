#include "Rectangle.h"

Rectangle ::Rectangle(size_t uid_, Point2d xy, double w_, double h_):Shape(uid_)
{
	//Q3. Initialized all the data memebr of this class. Don't delete this line. 
	this->uid = uid_;
	this->lt = xy;
	this->w = w_;
	this->h = h_;
}
