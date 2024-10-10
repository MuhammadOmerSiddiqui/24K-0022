#include<stdio.h>
int main()
{
    int size ,sum = 0 ;
    printf("ENTER THE SIZE OF ARRAY:") ;
    scanf("%d",&size) ;
    int array[size] ;
    for(int i=0 ; i<size ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ") ;
        printf("%d",(i+1)) ;
        printf(":") ;
        scanf("%d",&array[i]) ;
        sum += array[i] ;
    }
    printf("THE SUM OF THE ARRAY IS:%d",sum) ;
    return 0 ;
}