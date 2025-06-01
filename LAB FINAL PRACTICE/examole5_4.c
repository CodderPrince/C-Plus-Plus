//find the largest value among three integer by nested loop

#include<stdio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter the three integer number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest value is: %d\n",a);
        }
        else
        {
            printf("The largest value is: %d\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The largest value is: %d\n",b);
        }
        else
        {
            printf("The largest value is: %d\n",c);
        }
    }

    return 0;
}