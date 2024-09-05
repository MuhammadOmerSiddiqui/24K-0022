/*
 * Name: Muhammad Omer Siddiqui (24K-0022)
 * Date: 05 september 2024
 * File: TASK4.c
 * Description: A Program That Calculates And Outputs The Simple Interest.
*/

#include<stdio.h>
int main()
{
    int principal , time , interest ;
    float rate ;
    printf("PLEASE ENTER THE PRINCIPAL AMOUNT(100-1000000):") ;
    scanf("%d",&principal) ;
    while(principal<100 || principal>1000000)
    {
	printf("INVALID PRINCIPAL,ENTER AGAIN(100-1000000):") ;
	scanf("%d",&principal) ;
    }//end while
    printf("PLEASE ENTER THE RATE OF INTEREST(5-10):") ;
    scanf("%f",&rate) ;
    while(rate<5 || rate>10)
    {
	printf("INVALID RATE,ENTER AGAIN(5-10):") ;
	scanf("%f",&rate) ;
    }//end while   
    printf("PLEASE ENTER TIME(1-10):") ;
    scanf("%d",&time) ;
    while(time<1 || time>10)
    {
	printf("INVALID TIME,ENTER AGAIN(1-10):") ;
	scanf("%d",&time) ;
    }//end while
    interest = (principal*rate*time)/100 ;
    printf("THE INTEREST YOU NEED TO PAY IS:%d",interest) ;
    return 0 ;
}//end main
