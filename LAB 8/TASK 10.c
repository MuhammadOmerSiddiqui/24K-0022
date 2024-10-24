#include <stdio.h>
int main() 
{
    int matrix1[3][3] , matrix2[3][3] , resultant_matrix[3][3] ;
    int i , j , k ;
    printf("ENTER ELEMENTS FOR THE FIRST MATRIX:\n") ;
    for(i=0 ; i<3 ; i++) 
	{
        for (j=0 ; j<3 ; j++) 
		{
            printf("Element [%d][%d]: ",i+1,j+1) ;
            scanf("%d",&matrix1[i][j]) ;
        }
    }
    printf("ENTER ELEMENTS FOR THE SECOND MATRIX:\n") ;
    for(i=0 ; i<3 ; i++) 
	{
        for (j=0 ; j<3 ; j++) 
		{
            printf("Element [%d][%d]: ",i+1,j+1) ;
            scanf("%d",&matrix2[i][j]) ;
        }
    }
    for(i=0 ; i<3 ; i++) 
	{
        for(j=0 ; j<3 ; j++) 
		{
            for(k=0 ; k<3 ; k++) 
			{
                resultant_matrix[i][j] += matrix1[i][k] * matrix2[k][j] ;
            }
        }
    }
    printf("RESULT OF MATRIX MULTIPLICATION:\n") ;
    for (i=0 ; i<3 ; i++) 
	{
        for (j = 0 ; j<3 ; j++) 
		{
            printf("%d ",resultant_matrix[i][j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}
