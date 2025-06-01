//e^x = 1 + x + (x^2)/2! + ... + x^n/n! [0<x<1]

#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    printf("Enter the value of x (0<x<1): ");
    scanf("%f",&x);
    float i, sum = 1, fact = 1, term;
    for(i=1; i<=100; i++)
    {
        fact = fact*i;
        term = (float)(pow(x,i)/fact);
        sum = sum + term;
    }
    printf("The sum is: %.6lf\n",sum);

    return 0;
}