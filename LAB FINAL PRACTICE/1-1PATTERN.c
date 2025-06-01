//pattern

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number want to pattern: ");
    scanf("%d",&n);
    int row,col;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }

    return 0;
}