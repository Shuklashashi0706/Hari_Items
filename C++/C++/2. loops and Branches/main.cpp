#include <iostream>

int main()
{
	//if (1) std::cout << "IF\n";

	//if (0);
	//else  std::cout << "ELSE\n";

	//if (0);
	//else if (1) std::cout << "ELSE IF\n";
	//else;

	//// if one line of code don't use {}
	//if (1)
	//{
	//	// Code Block
	//}

	int condition = 10;
	//while (condition)
	//{
	//	// Code Block
	//	std::cout << condition << std::endl;
	//	condition--;
	//}

	//condition = 0;
	//do
	//{
	//	// Code Block
	//	std::cout << condition << std::endl;
	//} while (condition);

	//condition = 10;
	//for (std::cout << "Intialisation code\n";
	//	condition;
	//	std::cout << "every time before checking condition. "
	//				 "(Except for the first time.)\n")
	//{
	//	// Code Block
	//	std::cout << condition << std::endl;
	//	condition--;
	//}

	//// for loop as do while loop
	//condition = 0;
	//for (std::cout << "Code block of do\n"; condition;);

	condition = 10;
	int num = 0;
	for (; num = condition--;)
		std::cout << num << std::endl;

	condition = 10;
	while (num = condition--)
		std::cout << num << std::endl;
}