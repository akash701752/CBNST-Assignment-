/*
Write a C program to sort an array of integers using bubble sort.
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n , i ,j ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int arr[n] ;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Bubble Sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t =arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = t ;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]) ;
    }

    return 0 ;
}