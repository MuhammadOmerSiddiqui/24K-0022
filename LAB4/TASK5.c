#include<stdio.h>
int main()
{
    char inputUnit , convertUnit ;
    float temperature , result ;
    printf("ENTER THE UNIT WHICH YOU WANT TO CONVERT(C,F,K):") ;
    scanf("%c",&inputUnit) ;
    printf("ENTER THE UNIT IN WHICH YOU WANT THE TEMPERATURE TO BE CONVERTED:") ;
    scanf(" %c",&convertUnit) ;
    printf("ENTER THE TEMPERATURE:") ;
    scanf("%f",&temperature) ;
    if((inputUnit=='C' || inputUnit=='c') && (convertUnit=='K' || convertUnit=='k'))
    {
      result = temperature + 273.15 ;
      printf("THE TEMPERATURE IN KELVIN IS:%.2f\n",result) ;
    }
    else if((inputUnit=='C' || inputUnit=='c') && (convertUnit=='F' || convertUnit=='f'))
    {
      result = (temperature*(1.8)) + 32 ;
      printf("THE TEMPERATURE IN FAHRENHEIT IS:%.2f\n",result) ;
    }
    else if((inputUnit=='F' || inputUnit=='f') && (convertUnit=='C' || convertUnit=='c'))
    {
      result = (temperature-32)*((float)5/9) ;
      printf("THE TEMPERATURE IN CELCIUS IS:%.2f\n",result) ;
    }
    else if((inputUnit=='F' || inputUnit=='f') && (convertUnit=='K' || convertUnit=='k'))
    {
      result = (temperature-32)*((float)5/9) + 273.15 ;
      printf("THE TEMPERATURE IN KELVIN IS:%.2f\n",result) ;
    }
    else if((inputUnit=='K' || inputUnit=='k') && (convertUnit=='C' || convertUnit=='c'))
    {
      result = temperature-273.15 ;
      printf("THE TEMPERATURE IN CELCIUS IS:%.2f\n",result) ;
    }
    else 
    {
      result = (temperature-273.15)*(1.8) + 32 ;
      printf("THE TEMPERATURE IN FAHRENHEIT IS:%.2f\n",result) ;
    }
    printf("Thank you for using our AI-powered temperature converter.") ;
    return 0 ;
}