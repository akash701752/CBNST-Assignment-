/*
An Electricity board charges the following rates for use of electricity. For the First 200 units :
Rs 1 per unit 
For the next 100 units : Rs 1.5 per unit
Beyond 300 units : Rs 2 Per unit.
Write a C Program to read no of unit consumed and print out total charge amount.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int unit ;
    float charge =0 ; 
    printf("Enter Unit : ");
    scanf("%d",&unit);
    if(unit>300)
    {
        charge = 200 + 100*1.5 + (unit-300)*2 ;
    }
    else if (unit>=200 && unit<=300)
    {
        charge = 200 + (unit-200)*1.5 ;
    }
    else if(unit<=200)
    {
        charge = unit ;
    }
    printf("Total Charge = %.2f \n",charge) ;
    return 0 ;
}