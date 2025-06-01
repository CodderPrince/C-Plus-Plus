#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    float costs[size];
    float sum = 0, average, range, max = costs[0], min = costs[0];

    /* Calculate the sum of the costs. */
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&costs[i]);
        sum = sum + costs[i];

        /* Find the highest and lowest costs. */
        if (costs[i] > max)
        {
            max = costs[i];
        }
        if (costs[i] < min)
        {
            min = costs[i];
        }
    }

    /* Calculate the average and range of the costs. */
    average = sum / size;
    range = max - min;

    /* Print the results. */
    printf("The average cost is %.2f.\n", average);
    printf("The range of values is %.2f.\n", range);

    return 0;
}
