#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl

class Entity
{
	int num;
	char chr;
public:
	Entity() : num(-1), chr('!') 
	{ print("Entity Created with num: " << num << " and char: " << chr); }
	explicit Entity(int num) : num(num), chr('!')
	{ print("Entity Created with num: " << num << " and char: " << chr); }
	Entity(char chr) : num(-1), chr(chr) 
	{ print("Entity Created with num: " << num << " and char: " << chr); }
};

int main()
{
	// Only one implicit conversion is done by compiler
	

	//Entity e0 = 12; // explicit constructor
	Entity e1 = (Entity)12;
	Entity e2 = Entity(5);
	Entity e3 = 'A'; // implicitly converted to Entity
}