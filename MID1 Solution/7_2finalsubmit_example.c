#include <stdio.h>
#define students 2
#define group 11
int main() 
{
    int value[students];
    int count[group] = {0}; 
    int i;

    for (i = 0; i < students; i++) 
    {
        scanf("%d", &value[i]);
        ++count[value[i] / 10];
    }

    printf("\nGROUP\t    RANGE\tFREQUENCY\n\n");
    for (i = 0; i < group-1; i++) 
    {
        printf("%3d\t%3d to %3d\t%5d\n", i+1, i*10, i*10+9, count[i]);
    }
    printf("%3d\t%3d to %3d\t%5d\n", group, 100, 100, count[group-1]);
    return 0;
}