/*
 * Name: Muhammad Omer Siddiqui (24K-0022)
 * Date: 05 september 2024
 * File: TASK5.c
 * Description: A Program That Calculates The Slope Of Two Points.
*/

#include<stdio.h>
int main()
{
    float x1 , y1 , x2 , y2 , slope ;
    printf("ENTER X1:") ;
    scanf("%f",&x1) ;
    printf("ENTER Y1:") ;
    scanf("%f",&y1) ;
    printf("ENTER X2:") ;
    scanf("%f",&x2) ;
    printf("ENTER Y2:") ;
    scanf("%f",&y2) ;
    slope = (y2-y1)/(x2-x1) ;
    printf("THE SLOPE IS:%.3f",slope) ;
    return 0 ;
}
