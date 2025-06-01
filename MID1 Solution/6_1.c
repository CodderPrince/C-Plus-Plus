#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter any integer number: ");
    scanf("%d",&n);//123
    while(n>0)
    {
        rem= n%10;//3
        rev= rev*10 + rem;//0+3=3
        n= n/10;//12
    }
    printf("The reversed number: %d\n",rev);
}
