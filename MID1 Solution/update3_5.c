#include<stdio.h>
#include<string.h>
#define MAX 101

int main()
{
    char str[MAX];
    int i,j;
    printf("\nEnter an integer number: ");
    scanf("%s",str);
    printf("%s\n",str);

    for(i=0; i<strlen(str)-1; i++)
    {
        for(j=i+1; j<strlen(str); j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }

    return 0;
}
