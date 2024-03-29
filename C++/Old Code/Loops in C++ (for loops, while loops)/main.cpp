#include <iostream>

void Do()
{
	std::cout << "Do\n";
}

void FirstStep()
{
	std::cout << "First Step\n";
}

void EveryTimeBeforeConditionCheck()
{
	std::cout << "Checking Condition\n";
}

void EveryTimeAfterConditionCheck()
{
	std::cout << "Checking Condition\n";
}

int main()
{
	/*int condition = 6;
	for (FirstStep(); condition; EveryTimeBeforeConditionCheck())
	{
		std::cout << condition << "\n";
		condition--;
	}*/

	/*int condition = 6;
	while (condition)
	{
		EveryTimeAfterConditionCheck();
		std::cout << condition << "\n";
		condition--;
	}*/


	//bool condition = false;
	//do
	//{
	//	std::cout << "Runs Before Checking Condition!\n";
	//	//code
	//	std::cout << "Checking Condition!\n";
	//} while (condition);

	//for (Do(); false;);
}