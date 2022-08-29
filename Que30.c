/*
Implement bubble sort, Insertion sort, binary search in C
*/
#include<stdio.h>
#include<math.h>
void insertionSort(int arr[], int n)
{
    int i , j ;
    for(i=1 ;i<n; i++)
    {
        int key = arr[i] ;
        j = i-1 ;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        if(j+1 != i){
            arr[j+1] = key ;
        }
    }
}
int binarySearch(int arr[],int key,int n)
{
    int l=0 , r=n ;
    while(l<=r)
    {
        int mid = (l+r)/2 ;
        if(arr[mid]==key){
            return 1 ;
        }
        else if(key>arr[mid]){
            l = mid+1 ;
        }
        else{
            r = mid -1 ;
        }
    }
    return 0 ;
}
int main()
{
    int n , i , key ;
    printf("Enter N : ");
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter Numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Insertion Sort
    insertionSort(arr,n);
    printf("Sorted Array : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //Binary Search
    printf("\nEnter Key to Search : ");
    scanf("%d",&key);
    if(binarySearch(arr,key,n)){
        printf("Key is Found \n");
    }
    else{
        printf("Key NOT Found \n");
    }
    return 0 ;
}