//divisible by 6 not 4 in 0 to 100

#include<stdio.h>

int main()
{
    int i, count=0,sum=0;
    for(i=0; i<=100; i++)
    {
        if(i%6==0 && i%4 !=0)
        {
            printf("%d ",i);
            count++;
            sum = sum+i;
        }
    }
    printf("\nCompute number is: %d\n",count);
    printf("Sum is: %d\n",sum);

    return 0;
}