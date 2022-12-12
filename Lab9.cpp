#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

class circle
{
	private:
		double m_rad = 0;
		long double  m_area = 0;

	public:
		circle(double rad)
		{
			m_rad = rad;
			m_area = CircArea(rad);
		}

		~circle()
		{
			std::cout << "Destructor works!";
		}

		bool SetRad(double rad)
		{
			if (rad <= 0)
			{
				std::cout << "Error!" << std::endl;
				return false;
			}
			m_rad = rad;
		}

		double CircArea(double rad)
		{
			if (SetRad(rad))
			{
				m_area = m_rad * m_rad * M_PI;
				return m_area;
			}
			return m_area;

		}
		void PrintArea()
		{
			if (m_area == 0) 
				std::cout << "The circle does not exist!" << std::endl; 
			else 
				std::cout << m_area << std::endl;
		}
};

int main()
{
	std::cout << "Enter radius:";
	double x;
	std::cin >> x;
	circle circle1(x);
	circle1.PrintArea();
}