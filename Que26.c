/*
Input size and values in two arrays A and B, of max size 100. Then, compute A[i]+B[i] and store in 
array C. And compute A[i]*B[i] and store in array D.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , i ;
    printf("Enter N : ");
    scanf("%d",&n);
    int a[n] , b[n] , c[n] , d[n] ;
    printf("Enter Array A : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Array B : ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i] = a[i]+b[i] ;
        d[i] = a[i]*b[i] ;
    }
    printf("A[i] + B[i] : ");
    for(i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    printf("\nA[i] * B[i] : ");
    for(i=0;i<n;i++){
        printf("%d ",d[i]);
    }
    printf("\n");
    return 0 ;
}