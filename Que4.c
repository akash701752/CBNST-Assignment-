/*
Write a C program to display and find the sum of the series 1+11+111+....111 upto n. 
For eg. if n=4, the series is : 1+11+111+1111. Take the value of 'n' as input from the user.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n ,i ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int sum = 0 ;
    printf("Sum of Series is : ");
    for(i=1;i<=n;i++)
    {
        sum = sum*10 + i;
    } 

    printf("%d\n",sum) ;
    return 0 ;
}