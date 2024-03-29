#include <iostream>

namespace Name
{
	enum E
	{
		a,b,c
	};
}

int main()
{
	/*enum E1
	{
		a,b,c
	};

	E1 A = a;
	std::cout << A << std::endl;
	std::cout << E1::a << std::endl;
	E1 B = b;
	std::cout << B << std::endl;
	std::cout << E1::b << std::endl;*/


	/*enum E2
	{
		a = 10, b, c, d = 4, e
	};

	std::cout << E2::a << std::endl;
	std::cout << E2::b << std::endl;
	std::cout << E2::c << std::endl;
	std::cout << E2::d << std::endl;
	std::cout << E2::e << std::endl;*/


	/*enum E3 : char
	{
		a='A', b, c
	};

	std::cout << E3::a << std::endl;
	std::cout << E3::b << std::endl;
	std::cout << E3::c << std::endl;*/


	//class Class
	//{
	//public:
	//	enum Level
	//	{
	//		warning, info, error
	//	};

	//	void error() // Will give name conflict
	//	{
	//		std::cout << Level::warning << std::endl;
	//	}
	//};

	//std::cout << Class::warning << std::endl;
	//std::cout << Class::Level::info << std::endl;

	
	/*std::cout << Name::E::a << std::endl;
	std::cout << Name::a << std::endl;*/
}