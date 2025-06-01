//Write a program which will read a text count all occurrences of a particular word[s-14]
//prince

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
        char str[101], ch[2];
        printf("Enter the string: ");
        gets(str);
        printf("Enter the particular character: ");
        gets(ch);
        int i, count=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i] == ch[0])
            {
                count++;
            }
        }
       if(count>0)
       {
        printf("Occurrence of '%c' in '%s' is : %d\n", ch[0],str,count);
       }
       else
       {
        printf("'%c' is not found\n",ch[0]);
       }
    }

    return 0;
}