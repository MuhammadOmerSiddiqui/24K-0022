#include<stdio.h>
#include<string.h>
int main()
{
    int n , length_of_strings ;
    printf("ENTER THE LENGTH OF STRINGS:") ;
    scanf("%d",&length_of_strings) ;
    printf("ENTER N:") ;
    scanf("%d",&n) ; 
    getchar() ;
    char array[length_of_strings*2] ;
    char array2[length_of_strings] ;
    printf("ENTER THE DESTINATION STRING:") ;
    fgets(array,length_of_strings*2,stdin) ;
    array[strcspn(array,"\n")] = '\0' ;
    printf("ENTER THE SOURCE STRING:") ;
    fgets(array2,length_of_strings,stdin) ;
    array2[strcspn(array2,"\n")] = '\0' ;
    printf("THE DESTINATION STRING IS:") ;
    puts(array) ;
    printf("THE SOURCE STRING IS:") ;
    puts(array2) ;
    strncat(array,array2,n) ;
    printf("NOW THE DESTINATION STRING IS:") ;
    puts(array) ;
    return 0 ;
}