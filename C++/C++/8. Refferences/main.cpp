#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
	int num1 = 5;
	int num2 = 10;
	int& ref = num1;
	print(num1);
	print(ref);
	ref = 20;
	print(num1);
	print(ref);
	ref = num2; // is same as writing num1 = num2
	print(num1);
	print(ref);
}