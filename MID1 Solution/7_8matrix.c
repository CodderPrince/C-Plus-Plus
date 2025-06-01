/*if anyone interest to better understand knock me personally*/

#include <stdio.h>

int main()
{
    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < j)
            {
                matrix[i][j] = 1;
            }
            else if (i > j)
            {
                matrix[i][j] = -1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    
    printf("The matrix is:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}