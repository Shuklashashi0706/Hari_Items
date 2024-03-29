#include <iostream>

void PrintBytes(const void* Input, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        unsigned char Data = *((unsigned char*)(Input) + i);
        printf("%02x ",Data);
    }
}

class C
{
    private:
    int a,b,c;
    public:
    C() :a(-1),b(-4),c(3){}
};

// 00000000 00000000 00000000 00000100
// 11111111 11111111 11111111 11111011
// 11111111 11111111 11111111 11111100 = ff ff ff fc

int main()
{
    C num;
    PrintBytes(&num, sizeof(num));
}