/*
Write a C program that take 2 integer sets A[] and b[] as input and prints results of following set 
operations:
i.   A union B (Writefunctionset_union())
ii.  A intersection B (Write function set_intersection()) 
iii. A-B and B-A (Write function set_difference())


*/
#include<stdio.h>
#include<math.h>
void set_union(int a[],int n1 ,int b[], int n2)
{
    int i=0 , j=0 ;
    printf("A Union        B : ");
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            printf("%d ",a[i]);
            i++ ;
        }
        else if(a[i]==b[j]){
            printf("%d ",a[i]);
            i++ ;
            j++ ;
        }
        else{
            printf("%d ",b[j]);
            j++ ;
        }
    }
    while(i<n1)
    {
        printf("%d ",a[i]);
        i++ ;
    }
    while(j<n2)
    {
        printf("%d ",b[j]);
        j++ ;
    }
    
}
void set_intersection(int a[],int n1 ,int b[], int n2)
{
    int i=0 , j=0 ;
    printf("A Intersection B :");
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            i++ ;
        }
        else if(a[i]==b[j]){
            printf("%d ",a[i]);
            i++ ;
            j++ ;
        }
        else{
            j++ ;
        }
    }
}
void set_diff(int a[],int n1 ,int b[], int n2)
{
    // A - B 
    int i=0 , j=0 ;
    printf("A -  B           : ");
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            printf("%d ",a[i]);
            i++ ;
        }
        else if(a[i]==b[j]){
            i++ ;
            j++ ;
        }
    }
    while(i<n1)
    {
        printf("%d ",a[i]);
        i++ ;
    }
}
int main()
{
    int n1 ,n2  , i  ;
    printf("Enter n1 , n2 : ");
    scanf("%d%d",&n1,&n2);
    int a[n1] , b[n2] ;
    printf("Enter N1 : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter N2 : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    set_union(a,n1,b,n2);
    printf("\n") ;
    set_intersection(a,n1,b,n2) ;
    printf("\n") ;
    set_diff(a,n1,b,n2);
    printf("\n") ;
    return 0 ;
}