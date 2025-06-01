//m multiple of n

#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter two value m and n: ");
    scanf("%d %d",&m,&n);
    if(m%n==0)
    {
        printf("m is multiple of n\n");
    }
    else
    {
        printf("m is not multiple of n\n");
    }

    return 0;
}