#include<stdio.h>
int main() 
{
    int age , income , credit_score ;
    printf("Enter your age:") ;
    scanf("%d",&age) ;
    printf("Enter your monthly income:") ;
    scanf("%d",&income) ;
    printf("Enter your credit score:") ;
    scanf("%d",&credit_score) ;
    if (age >= 21 && age <= 60 && income >= 30000 && credit_score >= 650) 
    {
        printf("You are eligible for a loan.\n") ;
    } 
    else 
    {
        printf("You are not eligible for a loan.") ;
    }
    return 0 ;
}
