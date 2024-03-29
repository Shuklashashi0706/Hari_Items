#include <iostream>
#define print(x) std::cout << x << std::endl;

//void NoOfTime()
//{
//	static int i = 0;
//	print(i);
//	i++;
//}
//
//int main()
//{
//	NoOfTime();
//	NoOfTime();
//	NoOfTime();
//	NoOfTime();
//}


class Entity
{
public:
	static Entity& getEntity()
	{
		static Entity e;
		return e;
	}

	void Hello()
	{
		print("Hello");
	}
};

int main()
{
	Entity::getEntity().Hello();
}