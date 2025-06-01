//enter infinity number and count positive and negative number and terminate by enter 0

#include<stdio.h>

int main()
{
    int pos=0,neg=0;
    while(1)
    {
        int n;
        printf("Enter array element(Enter 0 to terminate): ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else if(n>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("Total positive number: %d\n",pos);
    printf("Total negative number: %d\n",neg);

    return 0;
}