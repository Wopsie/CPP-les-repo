#pragma once
#include <string>
class Point
{
public:
	Point(int, int);
	~Point();
	int x;
	int y;
	void PrintPoint();
	float Length();
	Point operator+(const Point &b) {
		Point p = Point(x + b.x, y + b.y);
		return p;
	}
private:
	std::string ToString();
};

