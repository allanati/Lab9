#include "Header.hpp"
#include <iostream>

int main()
{
	float r;
	std::cout << "Enter radius of the circle: ";
	std::cin >> r;
	an::Circle circle1(r);
	std::cout << "Sqr surface: " << circle1.SquareSurface();
}