//Enter four digits number and calculate their sum

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a four digits int number: ");
    scanf("%d",&n);//n=1234
    int i,dig,sum=0;
    for(i=0; i<4; i++)
    {
        dig = n%10;
        sum = sum+dig;
        n = n/10;
    }
    printf("Sum of is : %d\n",sum);

    return 0;
}