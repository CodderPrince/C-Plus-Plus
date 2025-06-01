//prime number 100 to 200

#include<stdio.h>

int main()
{
    int i,j,count;
    for(i=100; i<=200; i++)
    {
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j*j>i)
        {
            printf("%d ",i);
            count++;
        }
    }

    printf("\nCount is: %d\n",count);

    return 0;
}