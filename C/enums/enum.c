#include <stdio.h>

int main()
{
    // enum e : char // its not c++
    enum days
    {
        sunday = 7,monday = 1,tuesday,wednesday,thursday,friday,saturday
    };

    printf("%d\n", sunday);
    printf("%d\n", monday);
}