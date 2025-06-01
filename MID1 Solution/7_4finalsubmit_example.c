#include<stdio.h>
#define GIRLS 4
#define ITEMS 3

int main()
{
    int sales [GIRLS][ITEMS];
    int total_girls[GIRLS]={0};
    int total_items[ITEMS]={0};
    int row,col,grand_total=0;

    printf("Input data\nEnter values, one at a time, row_wise:\n");
    for(row=0; row<GIRLS; row++)
    {
       
        scanf("%d %d %d", &sales[row][0], &sales[row][1], &sales[row][2]);
    }
    printf("\n");

    printf("GIRLS TOTAL\n");
    for(row=0; row<GIRLS; row++)
    {
        for(col=0; col<ITEMS; col++)
        {
            total_girls[row] = total_girls[row] + sales[row][col];
        }
        printf("Sales girl[%d] = %d\n", row+1,total_girls[row]);
    }
    printf("\n");

    printf("ITEM TOTALS\n");
    for(col=0; col<ITEMS; col++)
    {
        for(row=0; row<GIRLS; row++)
        {
            total_items[col] = total_items[col] + sales[row][col];
        }
        printf("Item[%d] = %d\n", col+1, total_items[col]);
    }
    printf("\n");

    for(row=0; row<GIRLS; row++)
    {
        for(col=0; col<ITEMS; col++)
        {
            grand_total= grand_total + sales[row][col];
        }
    }
    printf("Grand Total = %d\n",grand_total);
    printf("\n");

    return 0;
}