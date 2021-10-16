
#include <stdio.h>

void main()
{
    int arr[20],n,i,j,temp;
    printf("Enter the array size>>");
    scanf("%d",&n);
    printf("Enter the array elements>>");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The entered array is>>");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is>>");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
