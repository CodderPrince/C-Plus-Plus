//enter three values and transforming their value

#include<stdio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Berfore transforming: \n");
    printf("a = %d\nb = %d\nc = %d\n\n",a,b,c);
    temp = a;
    a=b;
    b=c;
    c=temp;
    printf("After transforming\n");
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);

    return 0;
}
