#include <iostream>
#define print(x) std::cout << x << std::cout;

class InterfaceC {virtual void Hii() = 0;};

class InhClass : public InterfaceC { };

class InhClass2 : public InterfaceC { void Hii() override { } };

int main()
{
	//InterfaceC e; // Cannot instanciate interface
	//InhClass e; // does not have overriden pure virtual func
	InhClass2 e2;
}