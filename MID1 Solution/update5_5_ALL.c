#include<stdio.h>
int main()
{
    int mat,phy,che,t1,t2;
    scanf("%d %d %d",&mat,&phy,&che);
    t1=mat+phy+che;
    t2= mat+phy;
    if(mat>=60 && phy>=50 && che>=40 && t1>=200)
    {
        printf("The student is eligible for admission.\n ");
    }
    else if(t2>=150)
    {
        printf("The student is eligible for admission.\n ");
    }
    else{
        printf("The student is not eligible for admission.\n ");
    }

    return 0;
}
