#include<stdio.h>
int main()
{
	int number ;
	printf("ENTER ANY OWN NUMBER OF YOUR OWN CHOICE:") ;
	scanf("%d",&number) ;
	number>0 ? printf("IT'S A POSITIVE NUMBER") : number<0 ? printf("IT'S A NEGATIVE NUMBER") : printf("THE NUMBER IS ZERO") ;
    return 0 ;
}
