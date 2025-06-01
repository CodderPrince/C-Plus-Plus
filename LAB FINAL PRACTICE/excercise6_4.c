//fibonacci series using do...while loop

#include<stdio.h>

int main()
{
    int n,a=0, b=1,c=0,i;
    printf("Enter a number want to fibonacci series: ");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("%d ",b);
        i++;
    }
    do
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    } 
    while (i<=n);
    {
        printf("\n");
    }
    
    return 0;
}