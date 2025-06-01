#include<stdio.h>
#define N 3

int main()
{

int A[N],i, pos=0, neg=0,zero=0;
printf("\nEnter the 3 values: ");

for(i=0; i<N; i++)
scanf("%d",&A[i]);
for(i=0; i<N; i++)
{
if(A[i]>0)
{
    pos++;
}

else if(A[i]<0)
{
    neg++;
}

else
{
    zero++;
}

}

printf("\npositive numbers: %d\n",pos);
printf("negative numbers: %d\n",neg);
printf("zeros numbers: %d\n",zero);
printf("\n");

return 0;
}
