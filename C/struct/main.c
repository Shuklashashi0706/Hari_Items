#include <stdio.h>

struct Vector2
{
    float x,y;
    //no methods or say member function
};

int main()
{
    struct Vector2 pos;
    pos.x = 1.0f;
    pos.y = 2.2f;
    printf("%f\n", pos.x);
    printf("%f\n", pos.y);
}