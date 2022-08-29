/*
Write a C program, which will print two digit numbers whose sum of both digit is multiple of seven.
e.g. 16,25,34......
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i  ;
    printf("Enter Range : ");
    scanf("%d",&n);
    printf("Numbers are : ");
    for(i=16;i<=n;i++)
    {
        int num = i , rem , sum=0;
        while(num>0)
        {
            rem = num%10 ;
            sum = sum + rem ;
            num = num/10 ;
        }
        if(sum%7==0){
            printf("%d, ",i);
        }
    }
    printf("\n");
    return 0 ;
}