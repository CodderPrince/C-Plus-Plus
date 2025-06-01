#include<stdio.h>

int main()
{
    int num,b,sum=0;
    printf("Enter a four digit number: ");
    scanf("%d", &num);//1234
    for(int i=1; i<=4; i++)
    {
        b= num%10;//4 3 2
        sum= sum+b;//0+4=4+3=7+2=9
        num= num/10;//123 12 1
    }
    printf("Sum of the number each digits: %d\n",sum);

 return 0;
}