#include "stdafx.h"
#include <iostream>
#include "Point.h"

/*int main()
{
	int x = 2;
	if (x < 10) {
		std::cout << "x times x: " << x*x << " wow \n";
	}
	for (int i = 0; i < 10; i++) {
		x += i;
		std::cout << x << "\n";
	}

	std::cin >> x;
	return 0;
}

char* myName() {
	return "Silvan Herrema";
}*/




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
	Point p = Point(4, 3);
	Point p2 = Point(2, 2);
	p.PrintPoint();
	p2.PrintPoint();

	Point p3 = p + p2;
	p3.PrintPoint();
	std::cout << p.Length();
	char a;
	std::cin >> a;
    return 0;
}











