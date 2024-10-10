#include<stdio.h>
int main()
{
    int size , i ;
    printf("PLEASE ENTER THE SIZE OF ARRAY:") ;
    scanf("%d",&size) ;
    int array[size] ;
    for(i=0 ; i<size ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON INDEX ") ;
        printf("%d",(i+1)) ;
        printf(":") ;
        scanf("%d",&array[i]) ;
    }
    int max = array[0] , min = array[0] ;
    for(i=1 ; i<size ; i++)
    {
        if(array[i]>max)
        {
            max = array[i] ;
        }
        if(array[i]<min)
        {
            min = array[i] ;
        }
    }
    printf("THE MAXIMUM NUMBER IS:%d\n",max) ;
    printf("THE MINIMUM NUMBER IS:%d",min) ;
    return 0 ;
}