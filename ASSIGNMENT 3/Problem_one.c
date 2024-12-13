#include <stdio.h>
#include <string.h>
struct employee 
{
    int employee_code ;
    char employee_name[100] ;
    char date_of_joining[11] ;
} ;
void assign_values(struct employee *emp) 
{
    printf("Enter employee code: ") ;
    scanf("%d", &emp->employee_code) ;
    printf("Enter employee name: ") ;
    getchar() ;
    fgets(emp->employee_name, 100, stdin) ;
    emp->employee_name[strcspn(emp->employee_name, "\n")] = 0 ;
    printf("Enter date of joining (YYYY-MM-DD): ") ;
    scanf("%s", emp->date_of_joining) ;
}
int calculate_tenure(char *date_of_joining, int current_year, int current_month, int current_day) 
{
    int join_year, join_month, join_day ;
    sscanf(date_of_joining, "%d-%d-%d", &join_year, &join_month, &join_day) ;
    int tenure_years = current_year - join_year ;
    if (current_month < join_month || (current_month == join_month && current_day < join_day)) 
    {
        tenure_years-- ;
    }
    return tenure_years ;
}
int main() 
{
    struct employee employees[4] ;
    int count = 0 ;
    for (int i = 0; i < 4; i++) 
    {
        printf("Enter details for employee %d:\n", i + 1) ;
        assign_values(&employees[i]) ;
    }
    int current_year, current_month, current_day ;
    printf("Enter current date (YYYY-MM-DD): ") ;
    scanf("%d-%d-%d", &current_year, &current_month, &current_day) ;
    for (int i = 0; i < 4; i++) 
    {
        int tenure = calculate_tenure(employees[i].date_of_joining, current_year, current_month, current_day) ;
        if (tenure > 3) 
        {
            printf("\nEmployee Code: %d\n", employees[i].employee_code) ;
            printf("Employee Name: %s\n", employees[i].employee_name) ;
            printf("Date of Joining: %s\n", employees[i].date_of_joining) ;
            printf("Tenure: %d years\n", tenure) ;
            count++ ;
        }
    }
    printf("\nCount of employees with tenure more than 3 years: %d\n", count) ;
    return 0 ;
}
