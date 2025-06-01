//Write a program to compute the sum of the digits of a given number.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0,last;
    while(n>0)
    {
        last= n%10;
        sum = sum + last;
        n = n/10;
    }
    printf("Sum of the given number: %d\n",sum);

    return 0;
}
