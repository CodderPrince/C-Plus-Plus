//pattern ansi 8th edition page 168

#include<stdio.h>

int main()
{
    int row,col,num;
    printf("Enter the row number: ");
    scanf("%d",&num);
    for(row=1; row<=num; row++)
    {
        for(col=2; col<=row+1; col++)
        {
            printf("%d ",(row+col)%2);
        }
        printf("\n");
    }

    return 0;
}