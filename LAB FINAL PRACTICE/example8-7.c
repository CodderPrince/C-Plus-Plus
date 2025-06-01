//print ascii value a to z and A to Z

#include<stdio.h>

int main()
{
    int i;
    for(i=65; i<=122; i++)
    {
        if(i>90 && i<97)
        {
            continue;
        }
        printf("%5d\t=\t%c\n",i,i);
    }

    return 0;
}