//reverse word using while loop

#include<stdio.h>

int main()
{
    int n,rev=0,rem;
    printf("Enter the number: ");
    scanf("%d",&n);//123
    while(n>0)
    {
        rem = n%10;//3 2 1
        rev = rev*10 + rem;//0+3=3; 30+2=32; 320+1=321
        n = n/10;//12 1
    }
printf("\nAfter reverse: %d\n",rev);

return 0;    
}