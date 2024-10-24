#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool flag = false ;
	int upper_bound , lower_bound , i , j ;
	printf("ENTER THE UPPER BOUND:") ;
	scanf("%d",&upper_bound) ;
	printf("ENTER THE LOWER BOUND:") ;
	scanf("%d",&lower_bound) ;
	while(lower_bound<upper_bound || lower_bound==upper_bound)
	{
		printf("INVALID INPUT! ENTER AGAIN:\n") ;
		printf("ENTER THE UPPER BOUND:") ;
		scanf("%d",&upper_bound) ;
		printf("ENTER THE LOWER BOUND:") ;
		scanf("%d",&lower_bound) ;
	}
	for(i=upper_bound ; i<=lower_bound ; i++)
	{
		flag = false ;
		for(j=2 ; j<=lower_bound/2 ; j++)
		{
			if(i%j==0 && i!=j)
			{
				flag = true ;
				break ;
			}
		}
		if(flag)
		{
			
		}
		else
		{
			printf("%d\t",i) ;
		}
	}
    return 0 ;
}

