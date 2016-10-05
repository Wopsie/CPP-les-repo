#include "stdafx.h"
#include "Vector2.h"
#include <iostream>
#include <sstream>

Vector2::Vector2(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Vector2::PrintVector2() {
	std::cout << ToString();
}
float Vector2::Length() {
	float ab = x*x + y*y;
	return sqrt(ab);
}
std::string Vector2::ToString() {
	std::stringstream str;
	str << "x: " << x << "   y: " << y <<"\n";
	return str.str();
}

Vector2::~Vector2()
{
}


