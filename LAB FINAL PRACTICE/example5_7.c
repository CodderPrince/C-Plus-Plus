//loan sanction max loan 50,000

#include<stdio.h>
#define MAXLOAN 50000

int main()
{
    long int loan1, loan2, loan3, sancloan, sum23;
    printf("Enter the values of previous two loans: ");
    scanf("%ld %ld",&loan1,&loan2);
    printf("\nEnter the value of new loan: ");
    scanf("%ld",&loan3);
    sum23 = loan2 + loan3;
    sancloan = (loan1>0)? 0 : ((sum23>MAXLOAN)? MAXLOAN - loan2 : loan3);
    printf("\n\n");
    printf("Previous loans pending: %ld %ld\n",loan1,loan2);
    printf("Loan requested = %ld\n",loan3);
    printf("Loan sanctioned = %ld\n",sancloan);

    return 0;    
}