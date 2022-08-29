/*
Write a C program to find the reverse of an integer number.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n , i ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int rem , num , sum=0 ;
    num = n;
    while(num>0)
    {
        rem = num%10 ;
        sum = sum*10 + rem ;
        num = num/10 ;
    }
    printf("Reverse of %d is : %d \n",n,sum);
    return 0 ;
}