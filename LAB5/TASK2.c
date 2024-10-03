#include<stdio.h>
int main()
{
	int number ;
	printf("ENTER ANY NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&number) ;
	if(number>0)
	{
		if(number%2==0)
		{
			printf("IT'S A POSITIVE EVEN NUMBER") ;
		}
		else
		{
			printf("IT'S A POSITIVE ODD NUMBER") ;
		}
	}
	else if(number<0)
	{
		printf("IT'S A NEGATIVE NUMBER") ;
	}
	else
	{
		printf("IT'S ZERO") ;
	}
    return 0 ;
}

