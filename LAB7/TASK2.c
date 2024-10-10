#include<stdio.h>
int main()
{
    int size ;
    printf("ENTER THE SIZE OF ARRAY:") ;
    scanf("%d",&size) ;
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ") ;
        printf("%d",(i+1)) ;
        printf(":") ;
        scanf("%d",&array[i]) ;
    }
    printf("THE ARRAY IN REVERSE ORDER IS:\n") ;
    for(int i=size-1 ; i>=0 ; i--)
    {
        printf("%d\t",array[i]) ;
    }
    return 0 ;
}