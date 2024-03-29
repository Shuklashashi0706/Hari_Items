#include <iostream>
#define print(x) std::cout << x << std::endl;

int main()
{
	/*int intArr0[5];
	int intArr1[5] {};
	int intArr2[] = { 1,2,3 };*/

	/*int intArr0[4];
	print(intArr0[0]);
	print(intArr0[1]);
	print(intArr0[2]);
	print(intArr0[3]);*/


	/*int intArr0[4]{ 0 };
	intArr0[2] = 2;
	print(intArr0[0]);
	print(intArr0[1]);
	print(intArr0[2]);
	print(intArr0[3]);*/

	/*int intArr0[4];
	for (size_t i = 0; i < 4; i++)
	{
		intArr0[i] = i + 1;
		print(intArr0[i]);
	}*/


	/*int intArr[4];
	for (size_t i = 0; i < 4; i++)
		intArr[i] = i + 1;
	
	int* intArrP = intArr;
	print(intArrP[2]);
	print(*(intArrP + 2));

	intArrP[2] = 10;
	print(intArr[2]);
	*(intArrP + 2) = 20;
	print(intArr[2]);

	*((int*)((char*)intArr + 8)) = 30;
	print(intArr[2]);*/


	/*int* arrOnheap = new int[10];
	arrOnheap[2] = 10;
	print(arrOnheap[2]);

	delete[] arrOnheap;*/


	/*int arrS[4];
	int* arrH = new int[5];
	print(sizeof(arrS));
	print(sizeof(arrH));
	print(sizeof(int*));
	delete[] arrH;*/

	return 0;
}


//#include <iostream>
//#define print(x) std::cout << x << std::endl;
//
//class Entity1
//{
//public:
//	int array[4];
//	Entity1() { for (int i = 0; i < 4; i++) array[i] = i + 1; }
//};
//
//class Entity2
//{
//public:
//	int* array = new int[4];
//	Entity2()
//	{
//		for (int i = 0; i < 4; i++)
//			array[i] = i + 1;
//	}
//};
//
//int main()
//{
//	Entity1 e1;
//	Entity2 e2;
//}