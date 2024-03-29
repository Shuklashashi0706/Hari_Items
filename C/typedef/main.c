#include <stdio.h>

struct Vector2
{
    int x,y;
};

typedef struct
{
    int x,y,z;
}Vector3;

struct Vector4
{
    int x,y,z,w;
};

int main()
{
    // struct Vector2 pos2d;
    // pos2d.x = 10;
    // pos2d.y = 20;
    // printf("%d\n",pos2d.x);
    // printf("%d\n",pos2d.y);

    // Vector3 pos3d;
    // pos3d.x = 10;
    // pos3d.y = 20;
    // pos3d.z = 30;
    // printf("%d\n",pos3d.x);
    // printf("%d\n",pos3d.y);
    // printf("%d\n",pos3d.z);

    typedef struct Vector4 Vector4;
    Vector4 pos4d;
    pos4d.x = 10;
    pos4d.y = 20;
    pos4d.z = 30;
    pos4d.w = 40;
    printf("%d\n",pos4d.x);
    printf("%d\n",pos4d.y);
    printf("%d\n",pos4d.z);
    printf("%d\n",pos4d.w);
}