//decimel number to convert binary number

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    int i, binary[30],j;
    for(i=0; n>0; i++)
    {
        binary[i] = n%2;
        n = n/2;
    }
    printf("Binary number: ");
    for(j= i-1; j>=0; j--)
    {
        printf("%d",binary[j]);
    }
    printf("\n");

    return 0;
}