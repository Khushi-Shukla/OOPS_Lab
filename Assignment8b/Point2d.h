#pragma once
class Point2d
{
private:
	double x, y;
public:
	Point2d()
	{
		x = 0.0;
		y = 0.0;
	}

	Point2d(double, double);
	double getValueX();
	double getValueY();
};

