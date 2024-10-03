#include<stdio.h>
int main()
{
	int number ;
	printf("ENTER ANY NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&number) ;
	if(number%3==0 && number%5==0)
	{
		printf("THE NUMBER IS DIVISIBLE BY BOTH 3 AND 5") ;
	}
	else if(number%3==0)
	{
		printf("THE NUMBER IS ONLY DIVISIBLE BY 3") ;
	}
	else if(number%5==0)
	{
		printf("THE NUMBER IS ONLY DIVISIBLE BY 5") ;
	}
    return 0 ;
}

