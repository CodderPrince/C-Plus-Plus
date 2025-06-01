#include<stdio.h>

int main()
{
    int calls;
    float bill=250;
    printf("Enter total calls number this month: ");
    scanf("%d",&calls);
    if(calls<=100)
    {
        bill=bill;
    }
    else
    {
        bill= bill + (calls-100)*1.25;
    }
    printf("Each month mobile bill: %.2f\n",bill);

    return 0;
}