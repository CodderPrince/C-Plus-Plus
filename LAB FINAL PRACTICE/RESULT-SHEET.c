//students result sheet

#include<stdio.h>

int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    int i;
    printf("Enter 10 students marks: ");
    for(i=0; i<10; i++)
    {
        int marks;
        scanf("%d",&marks);
        if(marks>80)
        {
            a++;
        }
        else if(marks>60)
        {
            b++;
        }
        else if(marks>40)
        {
            c++;
        }
        else if(marks<=40)
        {
            d++;
        }
        //second half need to start if condition again
        if(marks>=81 && marks<=100)
        {
            e++;
        }
        else if(marks>=61 && marks<=80)
        {
            f++;
        }
        else if(marks>=41 && marks<=60)
        {
            g++;
        }
        else if(marks>=0 && marks<=40)
        {
            h++;
        }
    }
    printf("who have obtained more than 80 marks: %d\n",a);
    printf("who have obtained more than 60 marks: %d\n",b);
    printf("who have obtained more than 40 marks: %d\n",c);
    printf("who have obtained 40 or less marks: %d\n",d);
    printf("in the range 81 to 100: %d\n",e);
    printf("in the range 61 to 80: %d\n",f);
    printf("in the range 41 to 60: %d\n",g);
    printf("in the range 0 to 40: %d\n",h);

    return 0;
}