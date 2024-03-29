#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl

int main()
{
	/*const char* name = "Har\0i";
	const char name2[] = "Har\0i";*/

	//char* name3 = (char*)"Hari";
	////name3[2] = 'C'; // Error
	//print(name3);

	/*char name4[] = "Hari";
	name4[2] = 'C';
	print(name4);*/

	//char char1 = u8'A';
	//wchar_t char2 = L'1'; 
	//char16_t ochar2 = u'A';
	//char32_t char4 = U'A';
	//print(sizeof(char1));
	//print(sizeof(char2)); // different sometimes on different os
	//print(sizeof(ochar2));
	//print(sizeof(char4));

	/*using namespace std::string_literals;
	std::string name = "Hari "s + "shukla";
	print(name);*/

	/*char name[] = R"(
	Hii
	Hari
	Wassup)";
	print(name);*/

	/*char name[] = "Hari"; // See the assembly code to understand
	name[2] = 'A';
	print(name);*/
}