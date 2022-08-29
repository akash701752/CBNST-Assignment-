/*
Write a C program to check whether a given string is palindrome or not.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n  , i , j , flag =0 ;
    char str1[20] ;
    printf("Enter String 1 : ");
    scanf("%s",str1);
    int l1 = strlen(str1) ;
    i = 0 , j= l1-1 ;
    while(i<j)
    {
        if(str1[i]!=str1[j]){
            flag =1 ;
            break ;
        }
        i++ ;
        j-- ;
    }
    if(flag==0){
        printf("String is Palindrome \n");
    }
    else{
        printf("String is NOT  Palindrome");
    }
    return 0 ;
}