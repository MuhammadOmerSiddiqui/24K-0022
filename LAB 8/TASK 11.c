#include <stdio.h>
int main() 
{
    int n , i , j , space ;
    printf("Enter the number of rows for the upper half of the diamond:") ;
    scanf("%d",&n) ;
    for(i=1 ; i<=n ; i++) 
	{
        for(space=1 ; space<=n-i ; space++) 
		{
            printf(" ") ;
        }
        for(j=1 ; j<=i ; j++) 
		{
            printf("* ") ;
        }
        printf("\n") ;
    }
    for(i=n-1 ; i>= 1 ; i--) 
	{
        for(space=1 ; space<=n-i ; space++) 
		{
            printf(" ") ;
        }
        for(j=1 ; j<=i ; j++) 
		{
            printf("* ") ;
        }
        printf("\n") ;
    }
    return 0 ;
}
