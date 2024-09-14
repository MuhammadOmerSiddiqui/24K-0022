#include<stdio.h>
int main()
{
    int number ;
    printf("ENTER ANY NUMBER:") ;
    scanf("%d",&number) ;
    if(number%2==0)
    {
      printf("This number is even") ;
    }
    else
    {
      printf("This number is odd") ;
    }
    return 0 ;
}