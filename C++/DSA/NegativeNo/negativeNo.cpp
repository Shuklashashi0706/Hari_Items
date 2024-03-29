#include <iostream>
#include <cmath>
#define print(x) std::cout << x << std::endl

int main()
{
    char NegativeNo = -1;
    // 00000001
    // 11111110
    // 11111111 = 2^8 - 1
    print(int((unsigned char)NegativeNo));
    print(pow(2,8) - 1);

    // 11000101 = ?
    // 11000100
    // 00111011 = -59
    char num = 0b11000101;
    print(int(num));
}