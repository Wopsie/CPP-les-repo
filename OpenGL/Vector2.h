#pragma once
#include <string>
class Vector2
{
public:
	Vector2(int, int);
	~Vector2();
	int x;
	int y;
	void PrintVector2();
	float Length();
	Vector2 operator+(const Vector2 &b) {
		Vector2 p = Vector2(x + b.x, y + b.y);
		return p;
	}
private:
	std::string ToString();
};

