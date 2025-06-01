#include<stdio.h>
#define CANDIDATE 5

int main()
{
    int count[CANDIDATE]={0};
    int spoilt = 0, ballot;
    printf("Enter the number of candidates (1 to 5) and input 0 for terminate:\n");

    while(1)
    {
        scanf("%d",&ballot);
        if(ballot==0)
        {
            break;
        }

        else if(ballot<1 || ballot>CANDIDATE)
        {
            spoilt++;
        }

        else
        {
            count[ballot-1]++;
        }
    }

    printf("\nVote Counts:\n");
    for(int i=0; i<CANDIDATE; i++)
    {
    printf("Candidates %d: %d votes\n",i+1,count[i]);
    }
    printf("Spoilt Ballots: %d\n", spoilt);
       
    return 0;
}
