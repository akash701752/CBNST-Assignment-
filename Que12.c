/*
Take the price and quantity of items as an input. Write a C function to calculate the sum of the prices. Write another C function to calculate the discount according to the following rules:
For total less than Rs.1000, discount is 5%.
For total greater than Rs.1000 but less than Rs.5000, discount is 10%.
For total greater than Rs.5000, discount is 15%.
Write another function to print the individual item prices, total, discount and the final price.
Example:
If the prices are as follows: Item 1: 200
Item 2: 400
Item 3: 200
Item 4: 10
Item 5: 50
And the quantities are: Item 1: 1
Item 2: 1
Item 3: 3
Item 4: 5 Item 5: 2
Then you should print: Item
Price Quantity Subtotal 200 1 200
400 1 400
200 3 600
Item 1
Item 2
Item 3
Item 4
Item 5 ------------------------------------------------- TOTAL
10 5 50 50 2 100
1350 GRAND TOTAL 1215
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i ,j ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int price[n] , quan[n];
    printf("Enter Price : ");
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    printf("Enter Quantity : ");
    for(i=0;i<n;i++){
        scanf("%d",&quan[i]);
    }
    int total[n] , sum=0;
    for(i=0;i<n;i++)
    {
        total[i] = price[i]*quan[i] ;
        sum += total[i] ;
    }
    int disc ;
    if(sum<1000){
        disc = 5 ;
    }
    else if(sum>=1000 && sum<5000){
        disc = 10 ; 
    }
    else if(sum>5000){
        disc = 15 ;
    }
    float stotal = sum - (sum*disc)/100 ;
    printf("Item \tPrice \t Quantity \tSubtotal\n");
    for(i=0;i<n;i++)
    {
        printf("Item %d \t%d \t\t%d \t\t%d\n",i+1,price[i],quan[i],total[i]);
    }
    printf("-------------------------------------------------------\n");
    printf("TOTAL \t\t\t\t\t%d\n",sum);
    printf("Discount\t\t\t\t-%d\n",(sum*disc)/100);
    printf("-------------------------------------------------------\n");
    printf("GRAND TOTAL \t\t\t%f\n",stotal);
    return 0 ;
}