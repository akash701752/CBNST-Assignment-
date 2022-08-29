/*
Write a C function celsius() to convert degrees Fahrenheit to degrees Celsius. 
(The conversion formula is °C = 5/9 * (°F - 32).) Use it to print a Fahrenheit-to-Centigrade 
table for -40 to 220 degrees Fahrenheit, in increments of 10 degrees. (Remember that %f 
is the printf format to use for printing floating-point numbers. Also, remember that the 
integer expression 5/9 gives 0, so you won't want to use integer division.)
*/
#include<stdio.h>
#include<math.h>
float toCelcius(float f)
{
    f = f +10  ;
    float c;
    c = (5/9.0)*(f-32) ;
    return c ; 
}
int main()
{
    float f ; 
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&f);
    printf("Temperature in Celcius  = %f \n",toCelcius(f)) ;
    return 0 ;
}