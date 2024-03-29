#include <iostream>
#define print(x) std::cout << x << std::endl

//int main()
//{
//	//const float PI = 3.14f;
//	////PI = 12;
//
//
//	//const int* a1 = new int;
//	//int const* a2 = new int;
//	//int b = 10;
//	////a1 = b; a2 = b; //Error
//	//a1 = &b; a2 = &b;
//
//
//	//int* const a3 = new int;
//	//*a3 = b;
//	////a2 = &b; //Error
//	//delete a1;
//	//delete a2;
//	//delete a3;
//
//
//	//int const* const a4 = &b;
//	////a4 = nullptr; //Error
//	////*a4 = 3; //Error
//}

class entity
{
private:
	int _x, _y;
public:
	entity() : _x{2}, _y{3} 
	{}
	int getX() 
		const
	{
		//_x = 2;
		//_y = 3;
		return _x;
	}
};

void printsEntity(const entity& e)
{
	print(e.getX()); // because entity is passed as const refference in this function the method its accessing should not change the member variable(should be const method) and thus const after method helps in this case. Try adding (//) in Entity class after the getX() and before const 
} 

int main()
{
	entity e;
	printsEntity(e);
	return 0;
}