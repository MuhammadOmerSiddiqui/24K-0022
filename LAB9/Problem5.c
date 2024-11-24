#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0 ;
    char array[5][20] ;
    for(int i=0 ; i<5 ; i++)
    {
        printf("ENTER THE %d STRING:",i+1) ;
        fgets(array[i],20,stdin) ;
        array[i][strcspn(array[i],"\n")] = '\0' ; 
    }
    for(int i=0 ; i<5 ; i++)
    {
        count = 0 ;
        for(int j=0 ; j<strlen(array[i])/2 ; j++)
        {
            if(array[i][j]==array[i][strlen(array[i])-j-1])
            {
                count++ ;
            }
        }
        if(count==strlen(array[i])/2)
        {
            printf("PALINDROME\n") ;
        }
        else
        {
            printf("NOT PALINDROME\n") ;
        }
    }    
    return 0 ;
}