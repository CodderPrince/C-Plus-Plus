#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a series of numbers (enter 0 to break)\n");
    while (1)
    {
        printf("Number: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        sum = sum+num;
    }
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}
