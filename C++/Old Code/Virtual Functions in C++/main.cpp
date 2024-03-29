#include <iostream>
#define print(x) std::cout << x << std::endl;

class entity
{
public:
	//void Hii() // override for function gives error if there is no virtual function in parent class
	virtual void Hii()
	{
		print("Entity Hii");
	}

	void Bii()
	{
		print("Entity Bii")
	}
};

class Player : public entity
{
public:
	//void hii() override // gives error if there is no virtual function in parent class
	void Hii() override
	{
		print("Player Hii");
	}

	//void Bii() override // gives error because there is no virtual function in parent class
	void Bii()
	{
		print("Player Bii");
	}
};

void useHii(entity* entity)
{
	entity->Hii();
}

int main()
{
	entity e;
	Player p;
	useHii(&e);
	useHii(&p);

	entity* ePp = new Player;
	ePp->Hii();
	ePp = &p;
	ePp->Hii();

	e.Bii();
	ePp->Bii();

	delete ePp;
}