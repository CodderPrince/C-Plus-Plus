#include<stdio.h>
#include<string.h>
int main()
{
    int i,m,n;
   char str1[1000];

   printf("Enter a string :");
   //scanf("%s",str1);//for reading space part
   //getchar();//if you want skip space then use getchar 
   //when you use getchar compiler skip when found space
   gets(str1);

   printf("Enter number of characters you want to extract: ");
   scanf("%d",&m);
   printf("Enter beginning index from which you want to start: ");
   scanf("%d",&n);

   printf("Extracted string: \n");
   for(i=n-1; i<m+n-1;i++)
   {
       printf("%c",str1[i]);
   }


}
