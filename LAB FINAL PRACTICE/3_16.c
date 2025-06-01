//telephone bills

#include<stdio.h>

int main()
{
    int num;
    float bills=250;
    printf("Enter total bills number: ");
    scanf("%d",&num);
    if(num<=100)
    {
        bills = bills;
    }
    else
    {
        bills = bills + (num-100)*1.25;
    }

    printf("Customer total bills: %.2f\n",bills);

    return 0;
}