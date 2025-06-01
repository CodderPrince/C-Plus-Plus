#include<stdio.h>

int main()
{
    int x,pos=0,neg=0;
    printf("Enter the set of number and input 0 for terminate: ");
    while(1)
    {   
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else if(x>0)
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