/*
Write a C program, That reads list of n integer and print sum of product of consecutive numbers.
if n=7 and numbers are 4,5,2,5,6,4,7
then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i  ;
    printf("Enter N : ");
    scanf("%d",&n);
    int arr[n] ;
    printf("Enter Numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int prod = 0 ;
    for(i=1;i<n;i++)
    {
        prod = prod + arr[i-1]*arr[i] ; 
    }
    printf("The Consecutive Product is : %d\n",prod);
    return 0 ;
}