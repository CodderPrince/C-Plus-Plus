//Write a program to find the number of and sum of all integers greater than 100 
//and less than 200 that are divisible by 7.

#include<stdio.h>

int main()
{
    int i,count=0,sum=0;
    for(i=101; i<=200; i++)
    {
        if(i%7==0)
        {
            printf("%d\t",i);
            count++;
            sum = sum+i;
        }
    }
    printf("\nThe total number of: %d\n",count);
    printf("The sum of: %d\n",sum);

    return 0;
}
