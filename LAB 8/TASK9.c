#include<stdio.h>
int main()
{
	int rows , columns , i , j ;
	printf("ENTER THE NUMBER OF ROWS:") ;
	scanf("%d",&rows) ;
	printf("ENTER THE NUMBER OF COLUMNS:") ;
	scanf("%d",&columns) ;
	int matrix[rows][columns] , position_row , position_column ;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
				printf("ENTER THE VALUE THAT YOU WANT TO ENTER ON ROW %d AND COLUMN %d:",(i+1),(j+1)) ;
				scanf("%d",&matrix[i][j]) ;
		}
	}
	int max = matrix[0][0] ;
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
			if(matrix[i][j]>max)
			{
				max = matrix[i][j] ;
				position_row = i + 1 ;
				position_column = j + 1 ;
			}
		}
	}
	printf("THE MAXIMUM ELEMENT IS %d AND IT'S POSITION IS ROW %d COLUMN %d",max,position_row,position_column) ;
    return 0 ;
}

