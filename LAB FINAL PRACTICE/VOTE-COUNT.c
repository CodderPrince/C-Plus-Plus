//vote count

#include<stdio.h>
#define CANDIDATES 5
int main()
{
    int count[CANDIDATES] = {0};
    int spoiltBallaots = 0;
    int ballot;
    printf("Enter the candidate number(1 to 5) enter 0 to terminate: ");
    while(1)
    {
        scanf("%d",&ballot);
        if(ballot==0)
        {
            break;
        }
        else if(ballot<1 || ballot>CANDIDATES)
        {
            spoiltBallaots++;
        }
        else 
        {
            count[ballot-1]++;
        }
    }
    printf("\nVote Counts:\n");
    for(int i=0; i<CANDIDATES; i++)
    {
        printf("Candidate %d: %d votes\n",i+1,count[i]);
    }
    printf("Spoilt Ballots: %d\n",spoiltBallaots);

    return 0;
}