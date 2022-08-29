/*
Write a C program to accept the basic salary of an employee from the user. Calculate the gross 
salary on the following 
basis:
Basic            HRA        DA
1 - 4000         10%        50% 
4001 - 8000      20%        60% 
8001 - 12000     25%        70% 
12000 and above  30%        80%
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int salary , da , hra  ;
    float net ; 
    printf("Enter Salary : ");
    scanf("%d",&salary);
    if(salary >0 && salary<=4000)
    {
        hra = 10 ;
        da  = 50 ;
    }
    else if (salary >=4001 && salary<=8000)
    {
        hra = 20 ;
        da  = 60 ;
    }
    else if (salary >=80001 && salary<=12000)
    {
        hra = 25 ;
        da  = 75 ;
    }
    else if (salary >12000)
    {
        hra = 30 ;
        da  = 80 ;
    }
    net = salary + (salary*hra)/100 + (salary*da)/100 ;
    printf("Net Salary = %f \n",net) ;
    return 0 ;
}