#include <iostream>
#define print(x) std::cout << x << std::endl

class MyClass
{
public:
	MyClass()
	{
		print("Constructor called.");
	}
	~MyClass()
	{
		print("Destructor called.");
	}
};

int main()
{
	print(1);
	MyClass o;
	print(2);
}