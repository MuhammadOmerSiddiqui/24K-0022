#include<stdio.h>
int main()
{
    char operator ;
    int number1 , number2 ;
    printf("ENTER ANY NUMBER OF YOUR OWN CHOICE:") ;
    scanf("%d",&number1) ;
    printf("ENTER ANY OTHER NUMBER OF YOUR OWN CHOICE:") ;
    scanf("%d",&number2) ;
    printf("ENTER THE OPERATION THAT YOU WANT TO PERFORM(+,-,*,/):") ;
    scanf(" %c",&operator) ;
    switch(operator)
    {
      case '+' :
      printf("ANSWER IS:%d",number1+number2) ;
      break ;
      case '-' :
      printf("ANSWER IS:%d",number1-number2) ;
      break ;
      case '*' :
      printf("ANSWER IS:%d",number1*number2) ;
      break ;
      case '/' :
      printf("ANSWER IS:%d",number1/number2) ;
      break ;
      default :
      printf("INVALID OPERATION!") ;
    }
    return 0 ;
}