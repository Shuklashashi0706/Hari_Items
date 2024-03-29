#include <iostream>
#define print(x) std::cout << x << std::endl

class E
{
public:
	E() { print("E created."); }
	~E() { print("E destroyed."); }
};

int main()
{
	E* e = new E();
	delete e;

	E* e2 = new E[10];
	delete[] e2;
}