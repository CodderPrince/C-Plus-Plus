//star pattern

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number for pattern: ");
    scanf("%d",&n);
    int row,col;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}