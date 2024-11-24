#include<stdio.h>
void basic_calculator(int number1 , int number2 , char operation)
{
    switch(operation)
    {
        case '+' :
        printf("%d + %d = %d",number1,number2,number1+number2) ;
        break ;
        case '-' :
        printf("%d - %d = %d",number1,number2,number1-number2) ;
        break ;
        case '*' :
        printf("%d * %d = %d",number1,number2,number1*number2) ;
        break ;
        case '/' :
        printf("%d / %d = %.3f",number1,number2,(float)number1/number2) ;
        break ;
        default :
        printf("INVALID OPERATION") ;
    }
}
int main()
{
    int number1 , number2 ;
    char operation ;
    printf("ENTER THE FIRST NUMBER:") ;
    scanf("%d",&number1) ;
    printf("ENTER THE SECOND NUMBER:") ;
    scanf("%d",&number2) ;
    printf("ENTER THE OPERATION THAT YOU WANT TO PERFORM(+,-,*,/):") ;
    scanf(" %c",&operation) ;
    basic_calculator(number1,number2,operation) ;
    return 0 ;
}