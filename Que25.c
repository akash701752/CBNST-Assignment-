/*
Write2differentCfunctionstocomputeareaandperimeterofatrianglewhosesidesa,b, and c are given by user 
as inputs.Formula to compute perimeter = a + b + c 
Formula to compute area = [s(s-a)(s-b)(s-c)]0.5 Where s = 0.5 * (a+b+c)
Function prototypes are:
double perim(double a, double b, double c) 
double area(double a, double b, double c)
Your program should read the input data and print the output data via separate functions. 
The prototypes are:
double read_input()
double print_value(double val)
use math.h and compile with -lm flag
*/
#include<stdio.h>
#include<math.h>
double perimeter(double a,double b,double c)
{
    return (a+b+c) ;
}
double area(double a,double b,double c)
{
    float s = (a+b+c)/2.0 ;
    double ar = sqrt((s*(s-a)*(s-b)*(s-c))) ;
    return ar ;
}
int main()
{
    double a , b , c ;
    printf("Enter Sides : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("The Perimeter is : %lf\n",perimeter(a,b,c));
    printf("The Area      is : %lf\n",area(a,b,c));
    return 0 ;
}