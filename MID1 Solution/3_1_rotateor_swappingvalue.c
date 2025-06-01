#include<stdio.h>

int main()
{
    int x,y,z,s;
    printf("\nEnter the value of x,y & z: ");
    scanf("%d%d%d",&x,&y,&z);

    printf("Before rotate:\nx=%d\ny=%d\nz=%d\n",x,y,z);
    s=x;
    x=y;
    y=z;
    z=s;
    printf("\nAfter rotate:\nx=%d\ny=%d\nz=%d\n",x,y,z);    
    printf("\n");

 return 0;
}