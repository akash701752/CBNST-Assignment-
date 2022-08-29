/*
A triangular number is one which can be represented by that number of pebbles in a symmetric 
triangle. The first five triangular numbers are 1, 3, 6, 10 and 15.
Write a C function int isTriangular(int n) to test if a number ‘n’ is triangular or not. 
It should return 1 if it is triangular and 0 if not.
T1=1 T2=3 T3=6 T4=10 T5=15
*/
#include<stdio.h>
#include<math.h>
int triangular(int n)
{
    int i , c =1 , flag=0;
    if(n==1){
        return 1;
    }
    for(i=1;i<n;i++)
    {
        c = c + i+1 ;
        if(c==n){
            flag=1 ;
            break;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0 ;
    }

}
int main()
{
    int n , i;
    printf("Enter N : ");
    
    scanf("%d",&n) ;
    if(triangular(n)){
        printf("Number is Triangular") ;
    }
    else{
        printf("Number is NOT Triangular") ;
    }
    printf("\n");
    return 0 ;
}