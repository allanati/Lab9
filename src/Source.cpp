#include "Header.hpp"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

namespace an 
{
	Circle::Circle(float radius) 
	{
		m_radius = radius;
	}
	float Circle::SquareSurface()
	{
		float S = m_radius * m_radius * M_PI;
		return S;
	}
}
