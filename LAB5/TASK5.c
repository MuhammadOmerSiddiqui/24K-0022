#include<stdio.h>
int main()
{
	int number1 , number2 ;
	printf("ENTER ANY NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&number1) ;
	printf("ENTER ANY OTHER NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&number2) ;
	number1>number2 ? printf("FIRST NUMBER IS GREATER THAN THE SECOND") : printf("SECOND NUMBER IS GREATER THAN THE FIRST") ;
	return 0 ;
}

