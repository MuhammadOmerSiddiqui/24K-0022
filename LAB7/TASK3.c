#include<stdio.h>
int main()
{
    char name[100] , email[100] , phone_number[100] ;
    printf("PLEASE ENTER YOUR NAME:") ;
    scanf("%[A-Z a-z]",&name) ;
    printf("%s\n",name) ;
    printf("ENTER YOUR EMAIL:") ;
    scanf(" %[A-Za-z0-9._@-]",&email) ;
    printf("%s\n",email) ;
    printf("ENTER YOUR PHONE NUMBER:") ;
    scanf(" %[0-9-+]",&phone_number) ;
    printf("%s",phone_number) ;
    return 0 ;
}