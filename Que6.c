/*
Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of the
proper divisors (not including itself) of one number is equal to the other number and 
vice – versa. For example 220 & 284 are amicable numbers
First we find the proper divisors of 220:
220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
Now, 284: 1, 2, 4, 71, 142
1 + 2 + 4 + 71 + 142 = 220
Write a C program to check that the input pair of numbers is amicable.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b ,n ,i ,j;
    printf("Enter a and b : ");
    scanf("%d%d",&a,&b) ;
    int sum1 = 0, sum2 = 0 ;
    for(i=1;i<a/2+1;i++)
    {
        if(a%i ==0)
        {
            sum1 += i ;
        }
    }
    for(i=1;i<b/2+1;i++)
    {
        if(b%i ==0)
        {
            sum2 += i ;
        }
    }
    if(sum1==b && sum2==a){
        printf("Numbers are Amicable \n");
    }
    else{
        printf("Numbers are NOT Amicable \n");
    }
    return 0 ;
}