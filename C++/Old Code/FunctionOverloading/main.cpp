#include <iostream>

void print(int x)
{
	std::cout << x << std::endl;
}
void print(float x)
{
	std::cout << x << std::endl;
}
void print(const char* x)
{
	std::cout << x << std::endl;
}

int main()
{
	print("Hii");
	print(2);
	print(2.0f);
}