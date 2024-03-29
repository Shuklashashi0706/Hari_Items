#include <iostream>
#define print(x) std::cout << x << std::endl

class E;
void printFromE(E* e);

class E
{
	int x;
public:
	E() : x(0) {}

	void addToX(int x) 
	{ this->x = x; /* E* const e = this; */	}
	int getX() const 
	{ return this->x; /* E const* e = this; */ }
	void usesPrintFromE()
	{ printFromE(this); }
};

void printFromE(E* e)
{ print(e->getX()); }

int main()
{
	E e;
	e.addToX(10);
	e.usesPrintFromE();
}