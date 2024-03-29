#include <iostream>

void hii();

static void useHii() // try removing static and change the hii to any other word in hii.cpp
{
	hii();
}

int main()
{
	//useHii();
	return 0;
}