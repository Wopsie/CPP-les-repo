#include "stdafx.h"
#include <iostream>
#include "Vector2.h"

int myFibonacci(int p1, int p2, int rect, int sum) {
	if (rect <= 20) {
		std::cout << "i: " << rect << "   " << sum << "\n";
		rect++;
		sum = p1 + p2;
		p1 = p2;
		p2 = sum;
		return myFibonacci(p1, p2, rect, sum);
	}
	return sum;
}

int main()
{
	std::cout << "Fibonacci: "  << myFibonacci(0, 1, 0, 1);
	std::cout << "\n\n";
	Vector2 p = Vector2(4, 3);
	Vector2 p2 = Vector2(2, 2);
	p.PrintVector2();
	p2.PrintVector2();

	Vector2 p3 = p + p2;
	p3.PrintVector2();
	std::cout << p.Length();
	char a;
	std::cin >> a;
    return 0;
}











