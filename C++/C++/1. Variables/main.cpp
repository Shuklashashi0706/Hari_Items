#include <iostream>

int main()
{
	// This allows for all primitives
	//int x, y, z;
	//int a = 2, b = 4, c = 10;
	//int p{ 2 }; // narrowing conversions are prohibited
	//int q = 2.2f; // narrowing conversions are allowed
	//int r(2.2f); // narrowing conversions are allowed

	//char c1 = 'A';
	//char c2 = 65;

	std::cout << "Size of char in bytes is " << sizeof(char) << std::endl;
	unsigned char c3 = 255; // [unsigned]all bits used for +ve therefore 2^8 - 1(as 0 - 255 = 256)
	char c4 = 127; // signed char or simply char 1bit for -ve no. therefore 2^7 - 1 range = (-127,127)
}