#include <iostream>
#ifndef print(x)
#define print(x) std::cout << x << std::endl
#endif

class entity
{
public:
	int x, y;
	entity()
		:x{ 2 }, y{ 4 }
	{
		print("Entities Constructor method.");
		print("X: " << x << " and Y: " << y);
	}
	entity(int _x, int y)
		:x{ _x }, y{ y }
	{
		print("Entities Constructor method.");
		print("X: " << x << " and Y: " << y);
	}
};

class NoInstancesAllowed
{
private:
	//NoInstancesAllowed();
	NoInstancesAllowed() = delete;
};

int main()
{
	entity e;
	print(e.x);
	print(e.y);

	entity e2(10,2);
	print(e2.x);
	print(e2.y);

	//NoInstancesAllowed e3; //Error: cannot access private membors
}