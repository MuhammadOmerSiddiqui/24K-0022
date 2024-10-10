#include<stdio.h>
#include<stdbool.h>
int main()
{
    int size , i , temp = 0 ;
    bool swap = false ;
    printf("ENTER THE SIZE OF ARRAY:") ;
    scanf("%d",&size) ;
    int array[size] , top = size ;
    for(i=0 ; i<size ; i++)
    {
        printf("ENTER THE VALUE THAT YOU WANT TO STORE ON ") ;
        printf("%d",(i+1)) ;
        printf(" INDEX:") ;
        scanf("%d",&array[i]) ;
    }
    do
    {
        swap = false ;
        for(i=0 ; i<top-1 ; i++)
        {
            if(array[i]>array[i+1])
            {
                temp = array[i] ;
                array[i] = array[i+1] ;
                array[i+1] = temp ;
                swap = true ;
            }
        }
        top -= 1 ;
    }while(swap && top>0) ;
    for(i=0 ; i<size ; i++)
    {
        if(array[i]==array[i+1])
        {
            printf("NUMBER ") ;
            printf("%d",array[i]) ;
            printf(" OCCUR MORE THAN ONCE IN THE ARRAY\n") ;
            continue ;
        }
    }
    return 0 ;
}