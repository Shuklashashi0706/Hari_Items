#include <iostream>

//int commonNum = 10; //ERROR: commonNum is already defined
static int commonNum = 10;
extern int commonNum2;

int main()
{
	std::cout << commonNum << std::endl;
	std::cout << commonNum2 << std::endl;
}