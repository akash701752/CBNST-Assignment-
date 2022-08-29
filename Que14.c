/*
.Write a C program to check if a number has three consecutive 5s. If yes, print YES, else print NO.
Example: Number: 1353554 Result: NO
Number: 345559 Result: YES
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i ,j ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int c= 0 , num , rem , flag =0 ;
    num = n ;
    while(num>0)
    {
        rem = num%10 ;
        if (rem==5){
           c ++ ;
        }
        else{
            c = 0;
        }
        if(c==3){
            flag =1 ;
            break ;
        }
        num =num/10 ;
    }
    if(flag==1){
        printf("YES \n");
    }
    else{
        printf("NO\n");
    }
    return 0 ;
}