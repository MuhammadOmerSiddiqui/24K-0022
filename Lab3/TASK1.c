#include<stdio.h>
int main()
{
	int firstNumber , secondNumber , temporaryVariable ;
	printf("ENTER ANY NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&firstNumber) ;
	printf("ENTER ANY OTHER NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&secondNumber) ;
	printf("BEFORE SWAPPING FIRST NUMBER = %d\n",firstNumber) ;
	printf("BEFORE SWAPPING SECOND NUMBER = %d\n",secondNumber) ;
	temporaryVariable = firstNumber ;
	firstNumber = secondNumber ;
	secondNumber = temporaryVariable ;
	printf("AFTER SWAPPING FIRST NUMBER = %d\n",firstNumber) ;
	printf("AFTER SWAPPING SECOND NUMBER = %d\n",secondNumber) ;
	return 0 ;
} 