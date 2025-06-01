//palindrome check

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    printf("Enter the testcase number: ");
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101],str2[101];
        printf("Enter the string: ");
        gets(str1);
        strcpy(str2,str1);
        strrev(str2);
        if(strcmp(str1,str2)==0)
        {
            printf("'%s' is a palindrome!\n",str1);
        }
        else
        {
            printf("'%s' is not a palindrome!\n",str1);
        }
    }

    return 0;
}