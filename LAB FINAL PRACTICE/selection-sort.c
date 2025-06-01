//Write a program to implement selection-sort
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min, j,temp;
    for(i=0; i<n; i++)
    {
        min = i;
        for(j= i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp=arr[i];
        arr[i]= arr[min];
        arr[min]=temp;
    }
    printf("Sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}