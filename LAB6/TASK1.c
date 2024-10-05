#include<stdio.h>
int main()
{
    int number , sum = 0 ;
    printf("ENTER ANY NUMBER:") ;
    scanf("%d",&number) ;
    while(number!=0)
    {
        sum = sum + number ;
        printf("ENTER ANY NUMBER:") ;
        scanf("%d",&number) ;
    }
    printf("THE SUM OF THE NUMBERS IS:%d",sum) ;
    return 0 ;
}
//While loop will be better for user input as we don't know when the user will enter zero and we also don't know how many time the loop will execute