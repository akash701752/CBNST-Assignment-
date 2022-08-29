/*
Write a C program to input n numbers in an array, calculate the sum of all even numbers and all
odd numbers in the array and print the larger sum.
Example:
If the array contains the following elements: 2, 3, 3, 5, 4, 8, 7, 11, 2
The sum of all even elements is 2+4+8+2=16 Sum of all odd elements is 3+3+5+7+11=29 Therefore, 
the output should be 29.
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
    int even =0 , odd =0 ;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0){
            even += arr[i] ;
        }
        else{
            odd += arr[i] ;
        }
    }
    printf("Sum of Even No. : %d \n",even);
    printf("Sum of Odd  No. : %d \n",odd);
    return 0 ;
}