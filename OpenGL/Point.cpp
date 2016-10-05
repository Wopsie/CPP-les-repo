#include "stdafx.h"
#include "Point.h"
#include <iostream>
#include <sstream>

Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Point::PrintPoint() {
	std::cout << ToString();
}
float Point::Length() {
	float ab = x*x + y*y;
	return sqrt(ab);
}
std::string Point::ToString() {
	std::stringstream str;
	str << "x: " << x << "   y: " << y <<"\n";
	return str.str();
}

Point::~Point()
{
}


