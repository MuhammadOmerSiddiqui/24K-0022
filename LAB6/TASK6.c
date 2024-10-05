#include<stdio.h>
#include<stdbool.h>
int main()
{
    int number , previous_number = 0 , current_number , second_most_previous_number = 0 ;
    printf("ENTER ANY NUMBER:") ;
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
        printf("IT'S A PRIME NUMBER\n") ;
        printf("THE SERIES IS:\n") ;
		second_most_previous_number = 0 ;
	    previous_number = 1 ;
	    printf("%d\t",second_most_previous_number) ;
	    printf("%d\t",previous_number) ;
	    for(int i=2 ; i<number ; i++)
	    {
	        current_number = second_most_previous_number + previous_number ;
	        printf("%d\t",current_number) ;
	        second_most_previous_number = previous_number ;
	        previous_number = current_number ;
	    }	
	}
    else
    {
        printf("IT'S NOT A PRIME NUMBER") ;
        printf("THE SERIES IS:\n") ;
		second_most_previous_number = 0 ;
	    previous_number = 1 ;
	    printf("%d\t",second_most_previous_number) ;
	    printf("%d\t",previous_number) ;
	    for(int i=2 ; i<number ; i++)
	    {
	        current_number = second_most_previous_number + previous_number ;
	        printf("%d\t",current_number) ;
	        second_most_previous_number = previous_number ;
	        previous_number = current_number ;
	    }
    }
    return 0 ;
}