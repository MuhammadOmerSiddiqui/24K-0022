#include<stdio.h>
int main()
{
	int size , i , min , count = 0 , temp = 0 ;
	printf("ENTER THE SIZE OF ARRAY:") ;
	scanf("%d",&size) ;
	int array[size] ;
	for(i=0 ; i<size ; i++)
	{
		printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ROW %d:",(i+1)) ;
		scanf("%d",&array[i]) ;
		while(array[i]>9999)
		{
			printf("INVALID INPUT! ENTER AGAIN:\n") ;
			printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ROW %d:",(i+1)) ;
			scanf("%d",&array[i]) ;
		}
	}
	min = array[0] ;
	temp = array[0] ;
	for(i=0 ; i<size ; i++)
	{
		if(array[i]<min)
		{
			min = array[i] ;
		}
	}
	for(i=0 ; i<size ; i++)
	{
		if(array[i]==min)
		{
			array[i] = 9999 ;
		}
	}
	min = array[0] ;
	for(i=0 ; i<size ; i++)
	{
		if(array[i]==9999)
		{
			count++ ;
			continue ;
		}
		else if(array[i]<min)
		{
			min = array[i] ;
		}
	}
	if(count==size)
	{
		printf("THERE IS NO SECOND SMALLEST ELEMENT!") ;
	}
	else
	{
		printf("THE SECOND SMALLEST ELEMENT IS:%d",min) ;
	}
    return 0 ;
}