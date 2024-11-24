#include<stdio.h>
#include<stdbool.h>
int even_or_odd_check(int number)
{
    return number%2 ;
}
int main()
{
    int number ;
    printf("ENTER ANY NUMBER:") ;
    scanf("%d",&number) ;
    (even_or_odd_check(number)==0) ? printf("THIS NUMBER IS EVEN") : printf("THIS NUMBER IS ODD") ;
    return 0 ;
}