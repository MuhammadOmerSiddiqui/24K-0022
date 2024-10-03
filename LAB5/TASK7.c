#include<stdio.h>
int main()
{
    int number1 , number2 , ans = 0 ;
    printf("ENTER THE FIRST NUMBER:") ;
    scanf("%d",&number1) ;
    printf("ENTER THE SECOND NUMBER:") ;
    scanf("%d",&number2) ;
    printf("FIRST NUMBER BEFORE SWAPPING:%d\n",number1) ;
    printf("SECOND NUMBER BEFORE SWAPPING:%d\n",number2) ;
    ans = number1 ^ number2 ;
    number1 = number1 ^ ans ;
    number2 = number2 ^ ans ;
    printf("FIRST NUMBER AFTER SWAPPING:%d\n",number1) ;
    printf("SECOND NUMBER AFTER SWAPPING:%d",number2) ;
    return 0 ;
}