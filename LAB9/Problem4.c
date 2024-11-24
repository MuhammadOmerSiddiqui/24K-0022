#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool check = false ;
    int number_of_strings , maximum_length_of_strings ;
    printf("ENTER THE NUMBER OF STRINGS:") ;
    scanf("%d",&number_of_strings) ;
    printf("ENTER THE MAXMIUM LENGTH OF ANY STRING POSSIBLE:") ;
    scanf("%d",&maximum_length_of_strings) ;
    getchar() ;
    char array[number_of_strings][maximum_length_of_strings] ;
    char string_that_needs_to_be_found[maximum_length_of_strings] ;
    for(int i=0 ; i<number_of_strings ; i++)
    {
        printf("ENTER THE %d STRING:",i+1,":") ;
        fgets(array[i],maximum_length_of_strings,stdin) ;
        array[i][strcspn(array[i],"\n")] = '\0' ;
    }    
    printf("ENTER THE STRING THAT YOU WANT TO FIND:") ;
    fgets(string_that_needs_to_be_found,maximum_length_of_strings,stdin) ;
    string_that_needs_to_be_found[strcspn(string_that_needs_to_be_found,"\n")] = '\0' ;
    for(int i=0 ; i<number_of_strings ; i++)
    {
        if(strcmp(array[i],string_that_needs_to_be_found)==0)
        {
            check = true ; 
            break ;
        }
    }
    if(check)
    {
        printf("FOUND") ;
    }
    else
    {
        printf("NOT FOUND") ;
    }
    return 0 ;
}