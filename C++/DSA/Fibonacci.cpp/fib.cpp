#include <iostream>
#define print(x) std::cout << x << std::endl

// Max = 45

int fib(unsigned int n)
{
    if(n == 2) return 1;
    else if(n == 1) return 0;
    else return fib(n-1) + fib(n-2);
}

int main()
{
    unsigned int n {};
    std::cin >> n;
    print(fib(n));
    n -= 2;

    unsigned int i1{0};
    unsigned int i2{1};
    unsigned int Num{0};
    while (n > 0)
    {
        Num = i1;
        i1 = i2;
        i2 = Num + i2;
        n--;
    }
    print(i2);
}