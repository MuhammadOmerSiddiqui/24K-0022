#include <stdio.h>
#include <stdlib.h>

void inputEmployees(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter ratings for Employee %d:\n", i + 1);
        for (int j = 0; j < numPeriods; j++) {
            int rating;
            do {
                printf("Rating for Period %d (1-10): ", j + 1);
                scanf("%d", &rating);
                if (rating < 1 || rating > 10) 
                {
                    printf("Invalid rating. Please enter a rating between 1 and 10.\n");
                }
            } while (rating < 1 || rating > 10);
            ratings[i][j] = rating;
        }
    }
}

void displayPerformance(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Performance for Employee %d:\n", i + 1);
        for (int j = 0; j < numPeriods; j++) {
            printf("Period %d: %d\n", j + 1, ratings[i][j]);
        }
    }
}

int findEmployeeOfTheYear(int** ratings, int numEmployees, int numPeriods) {
    int bestEmployeeIndex = 0;
    double highestAvgRating = 0;
    for (int i = 0; i < numEmployees; i++) {
        double totalRating = 0;
        for (int j = 0; j < numPeriods; j++) 
        {
            totalRating += ratings[i][j];
        }
        double avgRating = totalRating / numPeriods;
        if (avgRating > highestAvgRating) {
            highestAvgRating = avgRating;
            bestEmployeeIndex = i;
        }
    }
    return bestEmployeeIndex;
}

int findHighestRatedPeriod(int** ratings, int numEmployees, int numPeriods) {
    int bestPeriodIndex = 0;
    double highestAvgRating = 0;
    for (int j = 0; j < numPeriods; j++) {
        double totalRating = 0;
        for (int i = 0; i < numEmployees; i++) {
            totalRating += ratings[i][j];
        }
        double avgRating = totalRating / numEmployees;
        if (avgRating > highestAvgRating) {
            highestAvgRating = avgRating;
            bestPeriodIndex = j;
        }
    }
    return bestPeriodIndex;
}

int findWorstPerformingEmployee(int** ratings, int numEmployees, int numPeriods) {
    int worstEmployeeIndex = 0;
    double lowestAvgRating = 10;
    for (int i = 0; i < numEmployees; i++) {
        double totalRating = 0;
        for (int j = 0; j < numPeriods; j++) {
            totalRating += ratings[i][j];
        }
        double avgRating = totalRating / numPeriods;
        if (avgRating < lowestAvgRating) {
            lowestAvgRating = avgRating;
            worstEmployeeIndex = i;
        }
    }
    return worstEmployeeIndex;
}

int main() {
    int numEmployees, numPeriods;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    printf("Enter the number of evaluation periods: ");
    scanf("%d", &numPeriods);

    int** ratings = (int**)malloc(numEmployees * sizeof(int*));
    for (int i = 0; i < numEmployees; i++) {
        ratings[i] = (int*)malloc(numPeriods * sizeof(int));
    }

    inputEmployees(ratings, numEmployees, numPeriods);
    displayPerformance(ratings, numEmployees, numPeriods);

    int employeeOfTheYear = findEmployeeOfTheYear(ratings, numEmployees, numPeriods);
    printf("Employee of the Year is Employee %d\n", employeeOfTheYear + 1);

    int highestRatedPeriod = findHighestRatedPeriod(ratings, numEmployees, numPeriods);
    printf("Highest Rated Period is Period %d\n", highestRatedPeriod + 1);

    int worstEmployee = findWorstPerformingEmployee(ratings, numEmployees, numPeriods);
    printf("Worst Performing Employee is Employee %d\n", worstEmployee + 1);
    for (int i = 0; i < numEmployees; i++) {
        free(ratings[i]);
    }
    free(ratings);

    return 0;
}
