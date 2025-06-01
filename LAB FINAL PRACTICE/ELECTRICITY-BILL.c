//electricity bill

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    printf("Enter users name: ");
    getchar();
    gets(str);
    float unit, total;
    printf("Enter users electricity unit: ");
    scanf("%f",&unit);
    if(unit<=200)
    {
        total = 100 + unit*0.8;
    }
    else if(unit<=300)
    {
        total = 100 + unit*0.9;
    }
    else if(unit>300)
    {
        total = 100 + unit*1.00;
    }
    if(unit>400)
    {
        int extra = total + total*0.15;
        printf("Total bill is : %.3f\n",extra);
    }
    else
    {
        printf("Total bill is: %.3f\n",total);
    }

    return 0;
}