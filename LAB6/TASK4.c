#include<stdio.h>
int main()
{
    int streak_counter = 0 ;
    char streak ;
    printf("HAVE YOU SENT THE STREAK(ENTER Y FOR YES AND N FOR NO):") ;
    scanf("%c",&streak) ;
    while(streak=='y' || streak=='Y')
    {
        printf("YOU MAINTAINED THE STREAK\n") ;
        streak_counter++ ;
        printf("HAVE YOU SENT THE STREAK(ENTER Y FOR YES AND N FOR NO):") ;
        scanf(" %c",&streak) ;
    }
    printf("YOU BROKE THE STREAK\n") ;
    printf("YOU MAINTAINED THE STREAK FOR %d",streak_counter) ;
    printf(" DAYS") ;
    return 0 ;
}