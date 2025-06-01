//pattern ansi 8th edition page 168

#include<stdio.h>

int main()
{
    int row, col,x,count=0;
    printf("Enter the row number: ");
    scanf("%d",&x);
    for(row = 1; row<=x; row++)
    {
        for(col=1; col<=row; col++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}