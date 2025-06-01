#include<stdio.h>
int main()
{
    int n;
    printf("Enter any integer number for factorial: ");
    scanf("%d",&n);
    long long int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("The factorial number: %lld\n",fact);
}
