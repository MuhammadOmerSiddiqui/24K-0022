#include<stdio.h>
int main()
{
	int age ;
	printf("PLEASE ENTER YOUR AGE:") ;
	scanf("%d",&age) ;
	if(age>=1 && age<=11)
	{
		printf("YOU ARE A CHILD") ;
	}
	else 
	{
		if(age>=12 && age<=17)
		{
			printf("YOU ARE A TEENAGER") ;	
		}
		else
		{
			if(age>=18 && age<=60)
			{
				printf("YOU ARE A ADULT") ;
			}
			else
			{
				if(age>60)
				{
					printf("YOU ARE A SENIOR") ;
				}				
			}		
		}
	}
    return 0 ;
}
