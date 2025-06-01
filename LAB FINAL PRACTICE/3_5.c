//Given an integer number, write a program that displays the number as follows:
//First line: all digits
//Second line: all except first digit
//Third line: all except first two digits

#include<stdio.h>

int main()
{
    int n,a,b,c;
    printf("Enter a four digit int number: ");
    scanf("%d",&n);
    a = n%1000;
    b = n%100;
    c = n%10;
    printf("%d\n%d\n%d\n%d\n",n,a,b,c);

    return 0;
}