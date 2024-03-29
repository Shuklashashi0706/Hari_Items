#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
    int n{};
    std::cin >> n;
    bool isPrime{};
    n < 3 ? isPrime=0 : isPrime=0;

    int i{2};
    while(i < n)
    {
        if(n%i == 0)
        {
            isPrime = 0;
            break;
        }
        else isPrime = 1;
        i++;
    }

    isPrime? print("Is a prime num.") : print("Is not a prime num.");
}