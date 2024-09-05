/*
 * Name: Muhammad Omer Siddiqui (24K-0022)
 * Date: 05 september 2024
 * File: TASK3.c
 * Description: A Program That Calculates The Total Fuel Cost For A Trip.
*/

#include<stdio.h>
int main()
{
    float fuelAverage , noOfLiters , totalFuelCost , totalFuelConsumed ; //variables declaration 
    int const distance = 1207 , fuelCostForwardTrip = 118 , fuelCostReturnTrip = 123 ;
    printf("PLEASE ENTER YOUR CAR'S FUEL AVERAGE:") ;
    scanf("%f",&fuelAverage) ;
    while(fuelAverage<=0)
    {
	printf("INVALID INPUT, PLEASE ENTER A POSITIVE VALUE:") ;
	scanf("%f",&fuelAverage) ;
    }//end while
    noOfLiters = distance/fuelAverage ;
    totalFuelCost = noOfLiters*fuelCostForwardTrip + noOfLiters*fuelCostReturnTrip ;
    totalFuelConsumed = noOfLiters*2 ;
    printf("TOTAL LITERS OF FUEL CONSUMED IS:%.1f\n",totalFuelConsumed) ;
    printf("TOTAL COST FOR COMPLETE JOURNEY IS:%.1f",totalFuelCost) ;
    return 0 ;
}//end main