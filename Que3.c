/*
Write a C program that calculates the HCF and LCM of two numbers
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b,  temp ;
    printf("Enter a  and b: ");
    scanf("%d%d",&a,&b) ;
    int x = a , y = b ;
    while(b!=0)
    {
        temp = b ;
        b = a%b ;
        a = temp ;
    }
    int hcf = a ;
    int lcm = (x*y)/hcf ;
    printf("LCM of %d and %d is %d : \n",x ,y, lcm);
    printf("HCF of %d and %d is %d : \n",x ,y, hcf);
    return 0 ;
}