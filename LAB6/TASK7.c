#include<stdio.h>
int main()
{
    int number , sum = 0 , temp = 0 , temp_num = 0 ;
    printf("ENTER THE NUMBER WHICH YOU WANT TO CHECK THAT WHETHER IT'S ARMSTRONG OR NOT:") ;
    scanf("%d",&number) ;
    temp_num = number ;
    while(temp_num>0)
    {
        temp = temp_num % 10 ;
        sum = sum + (temp * temp * temp) ;
        temp_num = temp_num / 10 ;
    }
    if(number==sum)
    {
        printf("THE NUMBER IS A ARMSTRONG NUMBER") ;
    }
    else
    {
        printf("THE NUMBER IS NOT A ARMSTRONG NUMBER") ;
    }
    return 0 ;
}