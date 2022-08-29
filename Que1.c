/*
A number is called an Armstrong number if the sum of the cubes of the digits of the number is equal 
to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C program that asks the user to enter a 
number and returns if it is Armstrong or not (use function).
*/
#include<stdio.h>
int main()
{
    int n , sum =0 , i , rem , num , arm=0;
    printf("Enter N : ");
    scanf("%d",&n) ;
    num = n;
    while(num>0)
    {
        rem = num%10 ;
        arm = arm + rem*rem*rem ;
        num = num/10 ;
    }
    if(arm==n){
        printf("Yes it is an Armstrong Number \n");
    }
    else{
        printf("NO it is NOT an Armstrong Number \n");
    }
    return 0 ;
}