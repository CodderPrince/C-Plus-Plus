//input two number and print

#include<stdio.h>

int main()
{
    float rice,sugar;
    printf("Enter the price of Rice: ");
    scanf("%f",&rice);
    printf("Enter the price of Sugar: ");
    scanf("%f",&sugar);
    printf("***LIST OF ITEMS***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs.%.2f\n",rice);
    printf("Sugar\tRs.%.2f\n",sugar);

    return 0;
}