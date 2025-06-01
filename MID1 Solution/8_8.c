#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]="Safaet";
    char s2[50];

    int i=0,j,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];

    }
    s2[j]='\0';

    printf("str1 = %s\n",s1);
    printf("str2 = %s\n",s2);

   int z= strcmp(s1,s2);
   if(z==0)
   {
       printf("String is palindrome");
   }
   else
   {
       printf("String is not palindrome");
   }
}


