//GCD

#include<stdio.h>
#include<math.h>

int GCD(int a,int b)
{
    if(b>a)
    {
        return GCD(b,a);
    }
    else
    {
        if(b==0)
        {
            return a;
        }
        else
        {
            return GCD(b,a%b);
        }
    }
}

int main()
{
    int a,b;
    printf("Enter the two number you want to know GCD: ");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is: %d\n",a,b,GCD(a,b));

    return 0;
}