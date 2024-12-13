#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
int validate_email(char* email)
{
    bool dot_presence = false ;
    int at_the_rate_count = 0 , temp_index ;
    if(email==NULL)
    {
        return 0 ;
    }
    else
    {
        for(int i=0 ; i<strlen(email) ; i++)
        {
            if(email[i]=='@')
            {
                at_the_rate_count++ ;
                temp_index = i ;
            }
        }
        for(int i=temp_index+1 ; i<=strlen(email) ; i++)
        {
            if(email[i]=='.')
            {
                dot_presence = 1 ;
                break ;
            }
        }
        if(at_the_rate_count==1 && dot_presence==true)
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }   
    }
}
int main()
{
    char *email , c ;
    int i = 0 , j = 1 ;
    email = (char*)malloc(sizeof(char)) ;
    printf("ENTER YOUE EMAIL PLEASE:") ;
    while(c!='\n') 
    {
        c = getc(stdin) ;
        email = (char*)realloc(email, j * sizeof(char)) ;
        email[i] = c ;
        i++ ;
        j++ ;
    }
    email[i] = '\0' ; 
    int result = validate_email(email) ;
    if(result==1)
    {
        printf("Valid Email\n") ;
    }
    else
    {
        printf("Invalid Email") ;
    }
    free(email) ;     
    return 0 ;
}