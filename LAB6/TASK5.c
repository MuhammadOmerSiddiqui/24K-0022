#include<stdio.h>
#include<stdbool.h>
int main()
{
    int number ;
    printf("ENTER ANY NUMBER TO CHECK WHETHER IT'S A PRIME NUMBER OR NOT:") ;
    scanf("%d",&number) ;
    bool prime_or_not = true ;
    for(int i = 2 ; i<=number/2 ; i++)
    {
        if(number%i==0)
        {
            prime_or_not = false ;
            break ; 
        }
    }
    if(prime_or_not && number>=2)
    {
        printf("IT'S A PRIME NUMBER") ;
    }
    else
    {
        printf("IT'S NOT A PRIME NUMBER") ;
    }
    return 0 ;
}