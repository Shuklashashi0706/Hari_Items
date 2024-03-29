#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
	true ? print(true) : print(false);
	true ? ( false ? print(true) : print(false) ) : print(false);
}