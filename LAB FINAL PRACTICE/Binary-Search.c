//Write a program to implement Binary-Search algorithm.

#include<stdio.h>

int main()
{
    int arr[]={2,5,6,7,8,9,10};
    int left=0, right=7,middle, find_item = 9;
    while(left<=right)
    {
        middle= (left+right)/2;
        if(arr[middle] == find_item)
        {
            printf("Find item is found at index: %d\n",middle);
            return 0;
        }
        else if(arr[middle]<find_item)
        {
            left = middle+1;
        }
        else
        {
            right = middle-1;
        }
    }
    printf("Find item is not found at above array\n");

 return 0;
}