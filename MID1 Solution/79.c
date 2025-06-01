#include<stdio.h>
#include<conio.h>

void main()
{
int A[10];
int i,k,Small,Loc;
//clrscr();
printf("Enter Elements of Array:---\n");
for(i=0;i<=9;i++)
scanf("%d",&A[i]);
for(k=0;k<=9;k++)
{
Small=A[k];
Loc=k;
for(i=k;i<=9;i++)
if(Small>A[i])
{
Small=A[i];
Loc=i;
}
A[Loc]=A[k];
A[k]=Small;
}
printf("Sorted Array is:--\n\n");
for(i=0;i<=9;i++)
printf("%d ",A[i]);
getch();
}