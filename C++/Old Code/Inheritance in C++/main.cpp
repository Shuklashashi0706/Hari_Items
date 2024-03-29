#include <iostream>
#define print(x) std::cout << x << std::endl;

class entity
{
public:
	int x, y;
	void move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}
};

class OtherClass
{

};

class Player : public entity, OtherClass
{
public:
	const char* name;
};

int main()
{
	Player p;
	p.name = "Hari";
	p.x = 1;
	p.y = 2;
	print(p.name);
	print(p.x << " " << p.y);
	p.move(1, 4);
	print(p.x << " " << p.y);

	print(sizeof(p));
}



//#include <iostream>
//#define print(x) std::cout << x << std::endl;
//
//struct Entity
//{
//public:
//	int x, y;
//	void move(int xa, int ya)
//	{
//		x += xa;
//		y += ya;
//	}
//};
//
//struct Player : public Entity
//{
//public:
//	const char* name;
//};
//
//int main()
//{
//	Player p;
//	p.name = "Hari";
//	p.x = 1;
//	p.y = 2;
//	print(p.name);
//	print(p.x << " " << p.y);
//	p.move(1, 4);
//	print(p.x << " " << p.y);
//}