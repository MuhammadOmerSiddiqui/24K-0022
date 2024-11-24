#include<stdio.h>
void swapIntegers(int *ptrnum1 , int *ptrnum2)
{
    int temp ;
    temp = *ptrnum1 ;
    *ptrnum1 = *ptrnum2 ;
    *ptrnum2 = temp ;
}
int main()
{
    int number1 , number2 ;
    printf("ENTER FIRST NUMBER:") ;
    scanf("%d",&number1) ;
    printf("ENTER SECOND NUMBER:") ;
    scanf("%d",&number2) ;
    printf("THE FIRST NUMBER BEFORE SWAPPING IS:%d\n",number1) ;
    printf("THE SECOND NUMBER BEFORE SWAPPING IS:%d\n",number2) ;
    swapIntegers(&number1,&number2) ;
    printf("THE FIRST NUMBER AFTER SWAPPING IS:%d\n",number1) ;
    printf("THE SECOND NUMBER AFTER SWAPPING IS:%d",number2) ;
    return 0 ;
}