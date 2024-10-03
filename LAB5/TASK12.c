#include<stdio.h>
int main()
{
	int attendancePercentage , examAndAssignmentMarks ;
	printf("ENTER YOUR ATTENDANCE PERCENTAGE:") ;
	scanf("%d",&attendancePercentage) ;
	printf("ENTER YOUR EXAM AND ASSIGNMENT COMBINED PERCENTAGE:") ;
	scanf("%d",&examAndAssignmentMarks) ;
	if(attendancePercentage<75 && attendancePercentage>=0)
	{
		printf("YOU GOT AN F GRADE") ;
	}
	else if(attendancePercentage>=75 && attendancePercentage<=100)
	{
		if(examAndAssignmentMarks>=85 && examAndAssignmentMarks<=100)
		{
			printf("YOU GOT AN A GRADE") ;
		}
		else if(examAndAssignmentMarks>=75 && examAndAssignmentMarks<85)
		{
			printf("YOU GOT AN B GRADE") ;
		}
		else if(examAndAssignmentMarks>=65 && examAndAssignmentMarks<75)
		{
			printf("YOU GOT AN C GRADE") ;
		}
		else if(examAndAssignmentMarks>=50 && examAndAssignmentMarks<65)
		{
			printf("YOU GOT AN D GRADE") ;
		}
		else if(examAndAssignmentMarks<50 && examAndAssignmentMarks>0)
		{
			printf("YOU GOT AN F GRADE") ;
		}
		else
		{
			printf("INVALID EXAM AND ASSIGNMENT PERCENTAGE ENTERED") ;
		}
	}
	else
	{
		printf("INVALID ATTENDANCE PERCENTAGE ENTERED") ;
	}
    return 0 ;
}

