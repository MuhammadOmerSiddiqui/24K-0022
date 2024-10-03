#include<stdio.h>
int main()
{
	int age , citizenship ;
	printf("ENTER YOUR AGE:") ;
	scanf("%d",&age) ;
	printf("ENTER YOUR CITIZENSHIP STATUS(ENTER 1 FOR YES AND 0 FOR NO):") ;
	scanf("%d",&citizenship) ;
	if(age>=18 && citizenship==1)
	{
		printf("YOU ARE ELIGIBLE TO VOTE") ;
	}
	else
	{
		printf("YOU ARE NOT ELIGIBLE TO VOTE") ;
	}
    return 0 ;
}

