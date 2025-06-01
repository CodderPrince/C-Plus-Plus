#include<stdio.h>
#define ROW 5
#define COL 5

int main()
{
    int row, col,array[ROW][COL];
    int i,j;
    printf("\n     MULTIPLICATION TABLE\n\n");
    printf("    ");

    for(j=1; j<=COL; j++)
    {
        printf("%4d",j);
    }
    printf("\n");
    printf("------------------------------\n");

    for(i=0; i<ROW; i++)
    {
        row= i+1;
        printf("%2d |",row);
    
    for(j=1; j<=COL; j++)
    {
        col=j;
        array[i][j]= row*col;
        printf("%4d", array[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}