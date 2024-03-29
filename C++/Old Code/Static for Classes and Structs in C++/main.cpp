#include <iostream>

class player
{
public:
	int x;
	int y;
	static int noOfPlayerSpawned;
	static void spawnPlayer()
	{
		std::cout << "Spawning player\n";
		noOfPlayerSpawned++;
		//x++; //ERROR: cannot access nonsatatic member var in static function
	}
};

int player::noOfPlayerSpawned;

int main()
{
	player p1;
	player p2;
	p1.noOfPlayerSpawned = 2;
	p2.noOfPlayerSpawned = 4;
	std::cout << p1.noOfPlayerSpawned << std::endl;
	std::cout << p1.noOfPlayerSpawned << std::endl;
	std::cout << player::noOfPlayerSpawned << std::endl;

	player::noOfPlayerSpawned = 20;

	p1.spawnPlayer();
	p2.spawnPlayer();
	player::spawnPlayer();
}