#include <iostream>
#include <cmath>
#define print(x) std::cout << x << std::endl

int main()
{
	/*void* ptr = 0;
	std::cout << ptr << std::endl;
	ptr = NULL;
	std::cout << ptr << std::endl;
	ptr = nullptr;
	std::cout << ptr << std::endl;*/



	//int a = 10;
	//int* x, y;
	//x = &a;
	////y = &a;
	//y = a;
	//int* p,* q;
	//p = &a;
	//q = &a;



	/*int num = 5;
	int* ptr = &num;
	std::cout << num << std::endl;
	num = 10;
	std::cout << num << std::endl;
	*ptr = 20;
	std::cout << num << std::endl;*/


	/*int num = 3;
	void* ptr = &num;
	std::cout << &num << std::endl;
	std::cout << ptr << std::endl;*/



	//int num = 6;
	//void* vPtr = &num;
	//int* iPtr = &num;
	//char* cPtr = (char*)(&num);
	////std::cout << *Ptr << std::endl; //Gives Error
	//std::cout << *iPtr << std::endl;
	//std::cout << *cPtr << std::endl;
	//std::cout << (char)6 << std::endl;



	/*int num = 5;
	int* pointer = &num;
	std::cout << num << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << &num << std::endl;
	std::cout << pointer << std::endl;*/



	/*int num = 5;
	int* ptr = &num;
	int** ptrOptr = &ptr;
	std::cout << &num << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << ptrOptr << std::endl;*/

	/*int num = 5;
	int* pointer = &num;
	int** pointerOfPointer = (int**)(pointer);
	std::cout << num << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << int(*pointerOfPointer) << std::endl;*/

	//char* buffer = new char[5];
	//memset(buffer, 170, 5); //fills memory with aa aa aa aa aa

	//delete[] buffer;



	//int b = 10;
	//int a = 5;
	//int* ap = &a;
	//int* bp = &b;
	//print(ap << " " << bp);

	//int offsetOf_bFrom_a = ap - bp;
	//print(offsetOf_bFrom_a); // (&a - &b) / sizeof(a)
	//print(*(bp + offsetOf_bFrom_a));
}