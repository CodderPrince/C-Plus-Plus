//electricity bill

#include<stdio.h>

int main()
{
    int t;
    printf("Enter the test case number: ");
    scanf("%d",&t);
    while(t--)
  {
    int customer_number, unit;
    printf("Enter customer number and units: ");
    scanf("%d %d",&customer_number,&unit);
    float charge=0;
    if(unit<=200)
    {
        charge = 0.5*unit;
    }
    else if(unit<=400)
    {
        charge = 100 + (unit-200)*0.65;
    }
    else if(unit<=600)
    {
        charge = 230 + (unit-400)*0.80;
    }
    else if(unit>600)
    {
        charge = 390 + (unit-600)*1.00;
    }
    printf("Electricity bill is: %.2f\n",charge);
  }
 return 0;
}