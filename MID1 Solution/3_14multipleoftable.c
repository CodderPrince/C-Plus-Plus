#include <stdio.h>

int main()
{
    int m, n;
    
    printf("Enter two integer values: ");
    scanf("%d %d", &m, &n);
    
    if (m % n == 0) 
    {
        printf("%d is a multiple of %d.\n", m, n);
    } 
    else 
    {
        printf("%d is not a multiple of %d.\n", m, n);
    }
    
    return 0;
}