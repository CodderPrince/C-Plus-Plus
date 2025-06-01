#include<stdio.h>

int main()
{
    float a,b;
    int sum=0;
    printf("\nEnter two floatting number: ");
    scanf("%f %f",&a, &b);
    sum= a+b;
    printf("Value of a = %f\nValue of b = %f\n Sum of two float number = %d\n",a,b,sum);

    return 0;
}