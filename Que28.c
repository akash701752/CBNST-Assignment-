/*
Input date, month and year from the user, and using switch case, display in worded format.
e.g.
input: d=16, m=7, y=1992 output: 16th July, 1992
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int d , m ,y ;
    printf("Enter Date (dd mm yyyy) : ");
    scanf("%d%d%d",&d,&m,&y);
    int day = d%10 ;
    char ch1[] = "st" , ch2[] = "nd" , ch3[] ="rd" , ch4[] ="th" ;
    if(day==0 || day== 4 || day== 5 || day == 6 || day== 7 || day == 8 || day == 9)
    {
        printf("%d%s ",d,ch4) ;
    }
    else if(day==3)
    {
        printf("%d%s ",d,ch3) ;
    }
    else if(day==2)
    {
        printf("%d%s ",d,ch2) ;
    }
    else if(day==1)
    {
        printf("%d%s ",d,ch1) ;
    }
    switch (m)
    {
    case 1 :printf("January, ") ;
        break;
    case 2 :printf("February, ") ;
        break;
    case 3 :printf("March, ") ;
        break;
    case 4 :printf("April, ") ;
        break;
    case 5 :printf("May, ");
        break;
    case 6 :printf("June, ");
        break;
    case 7 :printf("July, ");
        break;
    case 8 :printf("August, ");
        break;
    case 9 :printf("September, ");
        break;
    case 10 :printf("October, ");
        break;
    case 11 :printf("November, ");
        break;
    case 12 :printf("December, ");
        break;
        
    default: printf("Enter Valid Month \n");
        break;
    }
    printf("%d \n",y) ;
    return 0 ;
}