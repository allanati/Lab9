#pragma once

#define _USE_MATH_DEFINES
#include <cmath>

namespace an {
	class Circle {
		private:
			float m_radius;
		public:
			Circle(float radius);
			float SquareSurface();
	};
}