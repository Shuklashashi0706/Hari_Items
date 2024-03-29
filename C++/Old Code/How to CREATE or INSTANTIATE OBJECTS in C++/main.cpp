#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl
using String = std::string;

class E
{
	String name;
public:
	E() : name("Name") {}
	E(String name) : name(name) {}

	const String& GetName() const { return name; }
};

int main()
{
	/*E e;
	E e2("Hari");
	E e3 = E("Manoj");
	E e4 = {"Shashi"};

	print(e.GetName());
	print(e2.GetName());
	print(e3.GetName());
	print(e4.GetName());*/

	
	//// On stack
	//E* ep;
	//{
	//	E e = { "Made E" };
	//	ep = &e;
	//}
	//print((*ep).GetName());

	// On heap
	//E* ep;
	//{
	//	E* e = new E("Made E");
	//	ep = e;
	//}
	//print((*ep).GetName());
	//delete ep;
}