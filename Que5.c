/*
Write a C program that reads a positive integer n and then prints the following pattern 
*********
_********
__*******
___******
____*****
_____****
______***
_______**
________*
where n is the number of lines.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n ,i ,j;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int spaces , row =0 ;
    for(i=0;i<n;i++)
    {
        spaces = row ;
        while(spaces-->0){
            printf(" ");
        }
        for(j=row;j<n;j++)
        {
            printf("*");
        }
        printf("\n") ;
        row++;
    }
    
    return 0 ;
}