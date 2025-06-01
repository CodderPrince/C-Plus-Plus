//2D MATRIX

#include<stdio.h>

int main()
{
    int i,j;
    int mat[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i<j)
            {
                mat[i][j]= 1;
            }
            else if(i>j)
            {
                mat[i][j]= -1;
            }
            else
            {
                mat[i][j]= 0;
            }
        }
    }

        printf("The matrix is:\n");
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                printf("%2d ",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");

return 0;
}