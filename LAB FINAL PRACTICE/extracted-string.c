//Write a program to extract a portion of a character string and print the extracted-string.
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    printf("Enter a string: ");
    gets(str);
    printf("Enter number of characters you want to extract: ");
    int x;
    scanf("%d",&x);
    printf("Enter begining position form which you want to strat: ");
    int y;
    scanf("%d",&y);
    int i;
    for(i= y-1; i<x+y-1; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}