#include<stdio.h>
#include<stdbool.h>
void is_prime(int *array , int size_of_array)
{
    int i , count = 2 , j ;
    for(i=0 ; i<size_of_array ; i++)
    {
        count = 2 ;
        if(array[i]==1)
        {
            printf("%d NUMBER IS NOT PRIME\n",i+1) ;
        }
        else if(array[i]%2==0 && array[i]!=2)
        {
            printf("%d NUMBER IS NOT PRIME\n",i+1) ;
        }
        else
        {
            for(j=3 ; j<=array[i]/2 ; j++)
            {    
                if(array[i]%j==0 && array[i]!=j)
                {
                    count++ ;
                    break ;
                }   
            }
            if(count>2)
            {
                printf("%d NUMBER IS NOT PRIME\n",i+1) ;
            }
            else
            {
                printf("%d NUMBER IS PRIME\n",i+1) ;        
            }
        }
    }
}
int main()
{
    int size_of_array ;
    printf("ENTER THE SIZE OF ARRAY:") ;
    scanf("%d",&size_of_array) ;
    int array[size_of_array] ;
    for(int i=0 ; i<size_of_array ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON INDEX %d:",i+1) ;
        scanf("%d",&array[i]) ;
    }
    is_prime(array,size_of_array) ;
    return 0 ;
}