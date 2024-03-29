#include <iostream>

//Syntax
//returnType name(parameters)
//{
//	Code Block
//	return returnvalue;
//}

// function Declerations
void SayHii();
float getValueOfPi();
int add(int, int);
// Default arguments at rightside or at end only
int calcInterest(int base, int intRate = 10); // You have to specify the default values for the arguments only in the declaration but not in the definition.

int main()
{
	SayHii();

	float pi = getValueOfPi();
	std::cout << pi << std::endl;

	int num1 = 12, num2 = 10;
	int sumOfnum1num2 = add(num1, num2);
	std::cout << sumOfnum1num2 << std::endl;

	int interest = calcInterest(100);
	std::cout << interest << std::endl;
}

// function Definition
void SayHii()
{
	std::cout << "Hii\n";
}

float getValueOfPi()
{
	return 3.14f;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int calcInterest(int base, int intRate) // default parameters at right side
{
	return base + (base / intRate);
}