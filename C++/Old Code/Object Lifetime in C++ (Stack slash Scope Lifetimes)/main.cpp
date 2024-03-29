#include <iostream>
#define print(x) std::cout << x << std::endl;

class E
{
public:
	E() { print("Created"); }
	~E() { print("Destroyed"); }
};

int main()
{
	E* ep;
	{
		int a = 1;
		E e;
		ep = new E;
	}
	print("Hello !");
	delete ep;
	//print(a);
}