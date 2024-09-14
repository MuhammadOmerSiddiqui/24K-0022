#include<stdio.h>
int main()
{
    int amount , discount ;
    printf("ENTER YOUR BILL:") ;
    scanf("%d",&amount) ;
    if(amount>=500 && amount<2000)
    {
      discount = amount * 0.05 ;
    }
    else if(amount>=2000 && amount<=4000)
    {
      discount = amount * 0.10 ;
    }
    else if(amount>4000 && amount<=6000)
    {
      discount = amount * 0.20 ;
    }
    else if(amount>6000)
    {
      discount = amount * 0.35 ;
    }
    else
    {
      discount = 0.00 ;
    }
    printf("YOUR BILL WAS:%d\n",amount) ;
    printf("THE AMOUNT YOU SAVED IS:%d\n",discount) ;
    amount = amount - discount ;
    printf("THE AMOUNT YOU NEED TO PAY IS:%d",amount) ;     
    return 0 ;
}