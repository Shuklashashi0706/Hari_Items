#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Etered age: %d\n", age);

    char name[10];
    printf("Enter your SingleName: ");
    scanf("%s",&name);
    printf("Etered name: %s\n", name);
    getchar();

    char fullname[25];
    printf("Enter your name: ");
    fgets(fullname, 25, stdin);
    fullname[strlen(fullname)-1] = '\0';
    printf("Entered name: %s\n", fullname);
}