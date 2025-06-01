//Enter two floating number and sum of the value int

#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter floating value of a and b: ");
    scanf("%f %f",&a,&b);
    int sum=0;
    sum = a+b;
    printf("a = %.2f\tb = %.f\t\nSum of a and b = %d\n",a,b,sum);

    return 0;
}