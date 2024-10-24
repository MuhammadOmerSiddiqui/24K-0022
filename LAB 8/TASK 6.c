#include<stdio.h>
int main()
{
	int number , i ;
	printf("ENTER ANY NUMBER:") ;
	scanf("%d",&number) ;
	for(i=number ; i>=0 ; i--)
	{
		if(i%2==1)
		{
			printf("%d\t",i) ;
		}
	}
    return 0 ;
}
