#include<stdio.h>
int main()
{
    int pin , i = 1 ;
    int const predefined_pin = 5678 ;
    printf("ENTER YOUR 4 DIGIT PIN:") ;
    scanf("%d",&pin) ;
    if(pin==predefined_pin)
    {
        printf("WELCOME") ;
    }
    else
    {
        while(pin!=predefined_pin && i<3)
        {
            printf("WRONG PIN! ENTER AGAIN:") ;
            scanf("%d",&pin) ;
            i++ ;
            if(pin==predefined_pin)
            {
                printf("WELCOME") ;
                break ;
            }
            else if(i==3)
            {
                printf("CARD BLOCKED!") ;
            }
        }
    }
    return 0 ;
} 