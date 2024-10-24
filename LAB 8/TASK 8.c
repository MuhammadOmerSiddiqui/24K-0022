#include <stdio.h>
#include<stdbool.h>
int main() 
{
    int matrix[3][3] ;
    int i , j , k , row_min , col_index ;
    bool saddle_point_exists = false ;
    printf("ENTER ELEMENTS FOR THE MATRIX:\n") ;
    for(i=0 ; i<3 ; i++) 
	{
        for(j=0 ; j<3 ; j++) 
		{
            printf("Element [%d][%d]: ",i+1,j+1) ;
            scanf("%d",&matrix[i][j]) ;
        }
    }
    for(i=0 ; i<3 ; i++) 
	{
        row_min = matrix[i][0] ;
        col_index = 0 ;
        for(j=1 ; j<3 ; j++) 
		{
            if(matrix[i][j]<row_min) 
			{
                row_min = matrix[i][j] ;
                col_index = j ;
            }
        }
        bool is_saddle_point = true ; 
        for(k=0 ; k<3 ; k++) 
		{
            if (matrix[k][col_index]>row_min) 
			{
                is_saddle_point = false ; 
                break ;
            }
        }
        if(is_saddle_point) 
		{
            printf("Saddle Point found at element [%d][%d]: %d\n",i+1,col_index+1,row_min) ;
            saddle_point_exists = true ;
        }
    }
    if(!saddle_point_exists) 
	{
        printf("No saddle point found in the matrix.\n") ;
    }
    return 0 ;
}
