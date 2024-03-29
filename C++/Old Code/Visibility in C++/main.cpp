#include <iostream>
#define print(x) std::cout << x << std::endl;

class Parent
{
public: int publicNum;
protected: int protectedNum;
private: int privateNum;
};

class Child1 : public Parent
{
public:
	void useParentsNum()
	{
		publicNum++; protectedNum++; //privateNum++;
	}
};

class Child2 : protected Parent
{
	void useParentsNum()
	{
		publicNum++; protectedNum++; //privateNum++;
	}
};

class Child3 : private Parent
{
	void useParentsNum()
	{
		publicNum++; protectedNum++; //privateNum++;
	}
};

int main()
{
	Parent o1;
	o1.publicNum = 1;
	//o1.privateNum = 1;
	//o1.protectedNum = 1;
	return 0;
}