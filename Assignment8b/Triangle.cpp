#include "Triangle.h"
#include "Point2d.h"
#include <cstdlib>
#include<iostream>


Triangle::Triangle(size_t uid_, Point2d v1_, Point2d v2_, Point2d v3_)
{
	//Q1. Initialized all the data member of this class. Don't delete this line 
	this->uid = uid_;
	this->v1 = v1_;
	this->v2 = v2_;
	this->v3 = v3_;
}


double Triangle::get_area()
{
	double term1 = v1.getValueX() * (v2.getValueY() - v3.getValueY());
	double term2 = v2.getValueX() * (v3.getValueY() - v1.getValueY());
	double term3 = v3.getValueX() * (v1.getValueY() - v2.getValueY());
	return 1 / 2.0 * abs(term1 + term2 + term3);

}
