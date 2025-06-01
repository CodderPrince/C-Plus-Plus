//compare two strings or add them
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101],str2[101],str3[101];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Strings are equal!\n");
    }
    else
    {
        printf("Strings are not equal!\n");
        strcat(str1,str2);//concatenates
    }
    strcpy(str3,str1);
    int l1,l2,l3;
    l1 = strlen(str1);
    l2 = strlen(str2);
    l3 = strlen(str3);
    printf("str1 = %s\t l1 = %d\n",str1,l1);
    printf("str2 = %s\t l2 = %d\n",str2,l2);
    printf("str3 = %s\t l3 = %d\n",str3,l3);

    return 0;
}