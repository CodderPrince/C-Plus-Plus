#include<stdio.h>
int main()
{
    int s[100];
    int i,first,last,mid,sort;
    first=0;
    last=9;
    mid=(first+last)/2;

    printf("Enter sorted array: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Enter item for search: \n");
    scanf("%d",&sort);
    while((sort!=s[mid]) && (first<=last))
    {
        if(sort<s[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }
    if(first>last)
    {
        printf("Item not found");
    }
    else
    {
        printf("%d item found at index %d\n",sort,mid);
    }


}
