#include<stdio.h>
int main()
{
	int salary ;
	float taxRate , tax ;
	printf("PLEASE ENTER YOUR SALARY:") ;
	scanf("%d",&salary) ;
	printf("PLEASE ENTER THE TAX RATE:") ;
	scanf("%f",&taxRate) ;
	tax = (taxRate/100)*salary ;
	salary = salary - tax ;
	printf("THE TAX YOU NEED TO PAY IS:%.0f\n",tax) ;
	printf("YOUR SALARY AFTER PAYING THE TAX IS:%d\n",salary) ;
	return 0 ;
}