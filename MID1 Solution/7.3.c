#include<stdio.h>
int main()
{
    int vote[5],can1=0,can2=0,can3=0,can4=0,can5=0,count=0,count_sp=0,i,v;
    printf("Enter votes for 5 candidates : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&v);
        vote[i]=v;
    }
    for(i=0;i<5;i++)
    {
        if(vote[i]==1)
            can1=can1+1;
             else
             {
                 if(vote[i]==2)
                 can2=can2+1;
                  else
             {
                 if(vote[i]==3)
                 can3=can3+1;

              else
             {
                 if(vote[i]==4)
                 can4=can4+1;

              else

                 if(vote[i]==5)
                 can5=can5+1;

             }
             }
             }
    }
    printf("\n votes to candidate1=%d ",can1);
    printf("\n votes to candidate2=%d ",can2);
    printf("\n votes to candidate3=%d ",can3);
    printf("\n votes to candidate4=%d ",can4);
    printf("\n votes to candidate5=%d ",can5);

    for(i=0;i<5;i++)
    {
        if(vote[i]<=5)
            count=count+1;
        else
            count_sp=count_sp+1;
    }
    printf("\nNumber of valid votes : %d\n",count);
    printf("Number of spoilt votes : %d\n",count_sp);

}
