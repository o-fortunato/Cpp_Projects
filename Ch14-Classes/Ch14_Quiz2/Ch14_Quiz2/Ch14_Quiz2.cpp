//Write a class named Ball.
//Ball should have two private member variables, one to hold a color, and one to hold a radius.
//Also write a function to print out the color and radius of the ball.
//
//The following sample program should compile :
//
//int main()
//{
//	Ball blue{ "blue", 10.0 };
//	print(blue);
//
//	Ball red{ "red", 12.0 };
//	print(red);
//
//	return 0;
//}
//and produce the result :
//
//Ball(blue, 10)
//Ball(red, 12)

#include <iostream>
#include <string>
#include <string_view>

class Ball {
	//Declare public first: Best practice
public:
	//Constructor function
	Ball(std::string_view color, double radius)
		: m_color{ color }
		, m_radius{ radius }
	{
	}
	//Returns ref for the same type (prevents conversions)
	const std::string& getColor() const { return m_color; }
	//No need for references (fundamental type)
	double getRadius() const { return m_radius; }

private:
	//Default initialized (prevents undefined behaviour)
	std::string m_color{ "None" };
	double m_radius{};
};

//Define <maybe not general> function outside of class (makes class reusable) 
void print(const Ball& ball) {
	std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}

int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

	return 0;
}