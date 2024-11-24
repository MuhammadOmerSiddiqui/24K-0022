#include<stdio.h>
#include<string.h>
char *string_reverse(char *string , char *string2)
{
    int i ;
    for(i=0 ; i<strlen(string) ; i++)
    {
        string2[i] = string[strlen(string)-i-1] ;
    }
    string2[i] = '\0' ;
    return string2 ;
}
int main()
{
    int length_of_string ;
    printf("ENTER THE LENGTH OF STRING:") ;
    scanf("%d",&length_of_string) ;
    getchar() ;
    char string[length_of_string] ;
    char string2[length_of_string] ;
    printf("ENTER THE STRING:") ;
    fgets(string,length_of_string,stdin) ;
    string[strcspn(string,"\n")] = '\0' ;
    puts(string_reverse(string,string2)) ;
    return 0 ;
}