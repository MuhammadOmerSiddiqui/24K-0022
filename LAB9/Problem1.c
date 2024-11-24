#include<stdio.h>
int product(int number1 , int number2)
{
    return number1 * number2 ;
}
int main()
{
    int number1 , number2 ;
    printf("ENTER ANY NUMBER:") ;
    scanf("%d",&number1) ;
    printf("ENTER ANY OTHER NUMBER:") ;
    scanf("%d",&number2) ;
    printf("THEIR PRODUCT IS:%d",product(number1,number2)) ;
    return 0 ;
}