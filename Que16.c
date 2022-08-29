/*
Write a C program to accept 10 values in an integer array. Display the number of odd, even, and 
negative numbers.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , even=0 , odd=0 , neg= 0 , i  ;
    printf("Enter 10 Numbers : ");
    int arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&n) ;
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("No. of Even Numbers : %d \n",even);
    printf("No. of Odd  Numbers : %d \n",odd);
    printf("No. of Negative Numbers : %d \n",neg);
    return 0 ;
}