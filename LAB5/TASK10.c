#include<stdio.h>
int main()
{
	int number , sum = 0 , temp = 0 ;
	printf("ENTER ANY NUMBER:") ;
	scanf("%d",&number) ;
	while(number>0)
	{
		temp = number%10 ;
		sum = sum + temp ;
		number = number/10 ;
	}
	printf("THE SUM OF THE DIGITS OF THE NUMBER IS:%d",sum) ;
    return 0 ;
}

