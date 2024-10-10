#include<stdio.h>
int main()
{
    int temperatures[7] , i ;
    float average = 0.0 , sum = 0.0 ;
    for(i=0 ; i<7 ; i++)
    {
        printf("ENTER THE TEMPERATURE FOR ") ;
        printf("%d",(i+1)) ;
        printf(" DAY:") ;
        scanf("%d",&temperatures[i]) ;
        if(temperatures[i]>40 || temperatures[i]<0)
        {
            printf("EXTREME TEMPERATURE ON DAY ") ;
            printf("%d\n",(i+1)) ;
        }
        sum += temperatures[i] ;
    }
    average = sum/7 ;
    printf("THE AVERAGE TEMPEARTURE FOR THE WEEK WAS:%.2f\n",average) ;
    return 0 ;
}