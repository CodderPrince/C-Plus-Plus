//admission form fill up

#include<stdio.h>

int main()
{
    int math,phy,che,sum,mp;
    printf("Enter math, phy, chemistry marks: ");
    scanf("%d %d %d",&math,&phy,&che);
    sum = math+phy+che;
    mp = math+phy;
    if(math>=60 && phy>=50 && che>=40 && sum>=200)
    {
        printf("Eligible for admission\n");
    }
    else if(mp>=150)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }

    return 0;
}