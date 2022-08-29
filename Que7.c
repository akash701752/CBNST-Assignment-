/*
Write a C function for the following problem:
Given a positive integer n, print the binary representation of n.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int arr[1000] ;
    int count = 0 ;
    int num = n ;
    /*
    while(num>0)
    {
        arr[count] = num%2 ;
        count++ ;
        num = num/2 ;
    }
    */
    while(num>0)
    {
        arr[count] = num & 1;
        count++;
        num = num/2 ;
    }
    printf("Binary Representation of %d is : ",n) ;
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]) ;
    }
  
    printf("\n");
    return 0 ;
}