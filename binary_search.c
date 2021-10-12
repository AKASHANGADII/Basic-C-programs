#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10],key,n,i;
    printf("Enter the number of array elements>>");
    scanf("%d",&n);
    printf("Enter the array elements>>");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element to find>>");
    scanf("%d",&key);
    int start=0;int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            printf("The key value %d found at position %d",key,mid+1);
            exit(0);
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
    }
    printf("Key value %d not found",key);
}
