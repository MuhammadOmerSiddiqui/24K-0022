#include<stdio.h>
int maxfinder(int *array , int size_of_array)
{
    int i , max = array[0] , min = array[0] ;
    for(i=0 ; i<size_of_array ; i++)
    {
        if(array[i]>max)
        {
            max = array[i] ;
        }
    }
    return max ;
}
int minfinder(int *array , int size_of_array)
{
    int i , max = array[0] , min = array[0] ;
    for(i=0 ; i<size_of_array ; i++)
    {
        if(array[i]<min)
        {
            min = array[i] ;
        }
    }
    return min ;
}
int main()
{
    int size_of_array , i ;
    printf("ENTER THE SIZE OF ARRAY:") ; 
    scanf("%d",&size_of_array) ;
    int array[size_of_array] ;
    for(i=0 ; i<size_of_array ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON INDEX %d:",i+1) ;
        scanf("%d",&*(array+i)) ;
    }
    printf("THE MINIMUM ELEMENT IS:%d\n",minfinder(array,size_of_array)) ;
    printf("THE MAXIMUM ELEMENT IS:%d",maxfinder(array,size_of_array)) ;   
    return 0 ;
}