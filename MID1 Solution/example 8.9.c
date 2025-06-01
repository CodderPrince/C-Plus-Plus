#include <stdio.h>
#include <string.h>

int main() {
    char s1[20],s2[20],s3[20];
    int x,l1,l2,l3;

    printf("\nEnter two string constants:\n");
    printf("?");
    scanf("%s %s",s1,s2);

    x = strcmp(s1,s2);

    if (x != 0) {
        printf("\nStrings are not equal\n");
        strcat(s1,s2);//concatenate two strings together
    } else {
        printf("\nStrings are equal\n");
    }

    /* Copying s1 to s3 */
    strcpy(s3,s1);

    /* Finding length of strings */
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);

    /* Output */
    printf("\ns1 = %s\t length = %d characters\n",s1,l1);
    printf("s2 = %s\t length = %d characters\n",s2,l2);
    printf("s3 = %s\t length = %d characters\n",s3,l3);


}
