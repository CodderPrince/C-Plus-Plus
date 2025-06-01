/*if anyone interest to better understand knock me personally*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101],ch[2];
    int i,len=0,count=0;
    printf("Enter any word: ");
    scanf("%s",str);
    printf("Enter the letter which you want to count above word: ");
    scanf("%s",ch);
    len= strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]==ch[0])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Occurrence of '%c' in '%s' = %d\n", ch[0],str,count);
    }
    
return 0;
}