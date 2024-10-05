#include<stdio.h>
int main()
{
    int lowerbound , upperbound , sum = 0 ;
    printf("PLEASE ENTER THE LOWERBOUND:") ;
    scanf("%d",&lowerbound) ;
    printf("PLEASE ENTER THE UPPERBOUND:") ;
    scanf("%d",&upperbound) ;
    while(lowerbound<0 || upperbound<=0 || lowerbound>upperbound)
    {
        printf("INVALID INPUT! PLEASE ENTER AGAIN:\n") ;
        if(lowerbound<0)
        {
            printf("PLEASE ENTER THE LOWERBOUND:") ;
            scanf("%d",&lowerbound) ;
        }
        else if(upperbound<=0)
        {
            printf("PLEASE ENTER THE UPPERBOUND:") ;
            scanf("%d",&upperbound) ;
        }
        else
        {
            printf("PLEASE ENTER THE LOWERBOUND:") ;
            scanf("%d",&lowerbound) ;
        }
    }
    if(lowerbound%2==0)
    {
        for(int i=lowerbound ; i<=upperbound ; i = i + 2)
        {
            sum = sum + i ;
        }
    }
    else
    {
        for(int i=lowerbound+1 ; i<=upperbound ; i = i + 2)
        {
            sum = sum + i ;
        }
    }
    printf("THE SUM OF THE NUMBERS IS:%d",sum) ;
    return 0 ;
}