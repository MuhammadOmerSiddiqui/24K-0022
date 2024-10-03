#include<stdio.h>
int main()
{
	int year ;
	printf("ENTER ANY YEAR:") ;
	scanf("%d",&year) ;
	if(year%100==0 && year%400!=0)
	{
		printf("THE YEAR IS NOT A LEAP YEAR") ;
	}
	else if(year%4==0)
	{
		printf("THE YEAR IS A LEAP YEAR") ;
	}
	else
	{
		printf("THIS YEAR IS NOT A LEAP YEAR") ;
	}
    return 0 ;
}

