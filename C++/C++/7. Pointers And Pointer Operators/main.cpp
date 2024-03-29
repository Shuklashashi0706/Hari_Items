#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
	//int num = 12;
	//int* numPtr { &num };
	//print("Address of num: " << &num);
	//print("Value of numPtr: " << numPtr);
	//print("Value of num: " << num);
	//print("Value at numPtr: " << *numPtr);

	//int num = 10;
	//int* ptr = &num;
	//print(num);
	//print(*ptr);
	//num = 20;
	//print(num);
	//print(*ptr);
	//*ptr = 30;
	//print(num);
	//print(*ptr);


	//int* nullP = 0; // o or NULL or nullptr
	//int** PoP = &nullP;
	//print(nullP);
	//print(*PoP);

	// Pointer Operators
	//int num1 = 2;
	//int num2 = 4;
	//int offsetOnum1FromNum2 = &num2 - &num1;
	//print(offsetOnum1FromNum2);
	//int valueOfnum2 = *((char*)&num1 + (offsetOnum1FromNum2 * sizeof(int)));
	//print(valueOfnum2);
	//valueOfnum2 = ((char*)&num1)[offsetOnum1FromNum2 * sizeof(int)];
	//print(valueOfnum2);
}