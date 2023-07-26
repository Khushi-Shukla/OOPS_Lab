#pragma once
class Shape
{
protected:
	size_t uid;
public:
	Shape() { uid = 0; }
	Shape(size_t uid_) { uid = uid_; }
	size_t get_uid();
	virtual double get_area();
	//Q4. Write relevant functions for this program?
};

