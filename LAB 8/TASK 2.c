#include<stdio.h>
int main()
{
	int rows , columns , i , j ;
	printf("ENTER THE NUMBER OF ROWS:") ;
	scanf("%d",&rows) ;
	printf("ENTER THE NUMBER OF COLUMNS:") ;
	scanf("%d",&columns) ;
	int matrix[rows][columns] ;
	int transpose[columns][rows] ;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
			printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ROW %d AND COLUMN %d:",(i+1),(j+1)) ;
			scanf("%d",&matrix[i][j]) ;
		}
	}
	printf("THE MATRIX IS:\n") ;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
			printf("%d\t",matrix[i][j]) ;
		}
		printf("\n") ;
	}
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
			transpose[j][i] = matrix[i][j] ;
		}
	}
	printf("THE TRANSPOSE IS:\n") ;
	for(i=0 ; i<columns ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			printf("%d\t",transpose[i][j]) ;
		}
		printf("\n") ;
	}
    return 0 ;
}

