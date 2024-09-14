#include<stdio.h>
int main()
{
    char name[30] ;
    int id , unitsConsumed ;
    float bill , unitPrice , surcharge ;
    printf("ENTER CUSTOMER ID:") ;
    scanf("%d",&id) ;
    printf("ENTER THE NUMBER OF UNITS CONSUMED:") ;
    scanf("%d",&unitsConsumed) ;
    printf("ENTER YOUR NAME:") ;
    scanf("%s",&name) ;
    if(unitsConsumed>=0 && unitsConsumed<=199)
    {
      bill = unitsConsumed*16.20 ;
      unitPrice = 16.20 ;
    }
    else if(unitsConsumed>=200 && unitsConsumed<300)
    {
      bill = unitsConsumed*20.10 ;
      unitPrice = 20.10 ;
    }
    else if(unitsConsumed>=300 && unitsConsumed<500)
    {
      bill = unitsConsumed*27.10 ;
      unitPrice = 27.10 ;
    }
    else
    {
      bill = unitsConsumed*35.90 ;
      unitPrice = 35.90 ;
    }
    if(bill>18000)
    {
      surcharge = bill * 0.15 ;
    }
    printf("CUSTOMER ID:%d\n",id) ;
    printf("CUSTOMER NAME:%s\n",name) ;
    printf("UNITS CONSUMED:%d\n",unitsConsumed) ;
    printf("AMOUNT CHARGES @Rs. %.2f",unitPrice) ;
    printf(" PER UNIT: %.2f\n",bill) ;
    printf("SURCHARGE AMOUNT:%.2f\n",surcharge) ;
    printf("NET AMOUNT PAID BY THE CUSTOMER: %.2f",bill+surcharge) ; 
    return 0 ;
}