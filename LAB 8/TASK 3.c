#include<stdio.h>
int main()
{
	int matrix[2][3][3] , i , j , k , sum[2] , sum_of_matrices = 0 ;
	for(i=0 ; i<2 ; i++)
	{
		sum_of_matrices = 0 ;
		for(j=0 ; j<3 ; j++)
		{
			for(k=0 ; k<3 ; k++)
			{
				printf("ENTER THE VALUE THAT YOU WANT TO STORE ON PAGE %d , ROW %d , AND COLUMN %d:",i+1,j+1,k+1) ;
				scanf("%d",&matrix[i][j][k]) ;
				sum_of_matrices += matrix[i][j][k] ;
			}
		}
		sum[i] = sum_of_matrices ;
	}
	for(i=0 ; i<2 ; i++)
	{
		printf("THE SUM OF THE %d MATRIX IS:%d\n",i+1,sum[i]) ;
	}
    return 0 ;
}
