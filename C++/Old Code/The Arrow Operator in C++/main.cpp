#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl

//class entity
//{
//public:
//	void SayHii()
//	{
//		print("Hii");
//	}
//};
//
//int main()
//{
//	entity* e = new entity;
//	e->SayHii();
//	(*e).SayHii();
//}



//class Entity
//{
//public:
//	int x;
//	void hii() const { print("Hii"); }
//};
//
//class ScopedPtr
//{
//private:
//	Entity* e;
//public:
//	ScopedPtr(Entity* entity)
//		: e(entity) {}
//	~ScopedPtr() { delete e; }
//	Entity* operator->() { return e; }
//	const Entity* operator->() const { return e; }
//};
//
//int main()
//{
//	ScopedPtr entity = ScopedPtr(new Entity());
//	entity->hii();
//
//	const ScopedPtr entity2 = ScopedPtr(new Entity());
//	entity2->hii();
//}



//struct Vector3
//{
//	int x, y, z;
//};
//
//int main()
//{
//	int offset = int(&((Vector3*)0)->x);
//	print(offset);
//	offset = int(&((Vector3*)0)->y);
//	print(offset);
//
//	Vector3 vec3;
//	offset = &(vec3.x) - (int*)&(vec3);
//	print(offset);
//	offset = &(vec3.y) - (int*)&(vec3);
//	print(offset);
//	offset = &(vec3.z) - (int*)&(vec3);
//	print(offset);
//}