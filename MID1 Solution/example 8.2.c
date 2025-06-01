#include <stdio.h>
int main( )
{
char line[100], character;
int c;
c = 0;
printf("Enter text. Press <Return> at end\n");
do
{
character = getchar();
line[c] = character;
c++;
}while(character != '\n');
c = c-1;//to remove the newline character
line[c] = '\0';//replace the newline character with null character
printf("%s\n", line);//printing continues until it gets null character
}
