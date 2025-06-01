#include <stdio.h>

int main() 
{
    int n,i, binary[30];
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=0; n>0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }   
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", binary[j]);
    }
    
    return 0;
}
/*
n=10; for(i=0; n>0; i++)
1. i=0;     0 index= 10%2= 0;   n= 10/2=5   10>0
2. i=1;     1 index= 5%2= 1;    n= 5/2=2    5>0
3. i=2;     2 index= 2%2= 0;    n= 2/2=1    2>0
4. i=3;     3 index= 1%2= 1;    n= 1/2=0    1>0
            as 1 is small than 2    
5. i=4 then check condition 0=!0 so loop is end
index: 0 1 2 3 
value: 0 1 0 1

now print the value
for (int j = i - 1; j >= 0; j--)
1. j= 4-1=3;    3 index value is 1
2. j= 3-1=2;    2 index value is 0
3. j= 2-1=1;    1 index value is 1
4. j= 1-1=0;    0 index value is 0
*/