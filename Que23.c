/*
Write a C program to take a list of n elements from the user. Store it in an array. 
Reverse the list.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n  , i , j ;
    printf("Enter N : ");
    scanf("%d",&n);
    int arr[n]  ;
    printf("Enter Numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i = 0 , j= n-1 ;
    while(i<j)
    {
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i++ ;
        j-- ;
    }
    printf("Reverse List is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]) ;
    }
    return 0 ;
}