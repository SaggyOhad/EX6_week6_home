#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	// for part c changes
	/*
	Point p2;
	p2 = p1;
	*/

	Point p2 = p1;

	std::cout << "p1=" << p1 << std::endl; // i added "<< p1" to fix the problem
	std::cout << "p2=" << p2 << std::endl; // i added "<< p2" to fix the problem

	// Part D
	p2 = p2;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}
