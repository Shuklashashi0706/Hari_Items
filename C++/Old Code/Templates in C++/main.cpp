#include <iostream>

//template<typename T>
//void print(T t)
//{
//	std::cout << t << std::endl;
//}
//
//int main()
//{
//	/*print("Hii");
//	print(2.0f);
//	print(2);
//	print('C');
//
//	print<int>(2);
//	print<char>(65);*/
//}


template<typename type, int size>
class Array
{
private:
	type arr[size];
public:
	int Getsize() const { return size; }
};

int main()
{
	Array<int, 4> arr;
	std::cout << arr.Getsize() << std::endl;
}