//merge two sorted array [subeen 47- Coaliation of Array]

#include<stdio.h>

int main()
{
    int n1,i;
    printf("Enter the first array size: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int n2,j;
    printf("Enter the second array size: ");
    scanf("%d",&n2);
    int arr2[n2];
    for(j=0; j<n2; j++)
    {
        scanf("%d",&arr2[j]);
    }

    int temp[n1+n2],k;
    for(i=0,j=0,k=0; i<n1 && j<n2; k++)
    {
        if(arr1[i]<arr2[j])
        {
            temp[k]=arr1[i];
            i++;
        }
        else
        {
            temp[k]=arr2[j];
            j++;
        }
    }
    while(i<n1)
    {
        temp[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        temp[k]=arr2[j];
        k++;
        j++;
    }

    printf("\nAgfter merge two sorted array\n");
    for(k=0; k<(n1+n2); k++)
    {
        printf("%d ",temp[k]);
    }
    printf("\n\n");
}