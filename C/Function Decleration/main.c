#include <stdio.h>

int add(int,int);
void sayHii(char[]);

int main()
{
    printf("%d\n",add(2,5));
    sayHii("Hari");
}

int add(int num1, int num2)
{
    return num1 + num2;
}

void sayHii(char name[])
{
    printf("hii %s\n",name);
}