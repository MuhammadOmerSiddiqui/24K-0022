#include<stdio.h>
int main()
{
	int number1 , number2 , number3 ;
	printf("ENTER THE FIRST NUMBER:") ;
	scanf("%d",&number1) ;
	printf("ENTER THE SECOND NUMBER:") ;
	scanf("%d",&number2) ;
	printf("ENTER THE THIRD NUMBER:") ;
	scanf("%d",&number3) ;
	if(number1>number2)
	{
		if(number1>number3)
		{
			printf("FIRST NUMBER IS THE LARGEST") ;
		}
		else
		{
			printf("THIRD NUMBER IS THE LARGEST") ;
		}
	}
	else if(number2>number3)
	{
		printf("SECOND NUMBER IS THE LARGEST") ;
	}
	else
	{
		printf("THIRD NUMBER IS THE LARGEST") ;
	}
    return 0 ;
}

