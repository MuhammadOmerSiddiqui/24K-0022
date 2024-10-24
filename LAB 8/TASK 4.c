#include<stdio.h>
int main()
{
	int rows , columns , i , j ;
	printf("ENTER THE NUMBER OF ROWS:") ;
	scanf("%d",&rows) ;
	printf("ENTER THE NUMBER OF COLUMNS:") ;
	scanf("%d",&columns) ;
	int matrix[rows][columns] ;
	if(rows==columns)
	{
		for(i=0 ; i<rows ; i++)
		{	
			for(j=0 ; j<columns ; j++)
			{
				printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ROW %d AND COLUMN %d:",(i+1),(j+1)) ;
				scanf("%d",&matrix[i][j]) ;
			}
		}
		printf("THE DIAGONAL ELEMENTS ARE:\n") ;
		for(i=0 ; i<rows ; i++)
		{
			for(j=0 ; j<columns ; j++)
			{
				if(i==j)
				{
					printf("%d\t",matrix[i][j]) ;
				}
				else if(i==0 && j==columns-1)
				{
					printf("%d\t",matrix[i][j]) ;
				}
				else if(i==rows-1 && j==0)
				{
					printf("%d\t",matrix[i][j]) ;
				}
			}
		}
	}
    return 0 ;
}
