                                /*Program of linear search*/

#include <stdio.h>
#include <conio.h>

void main()
{
   int arr[10],key,i,n;
   printf("Enter the number of array elements>>");
   scanf("%d",&n);
   printf("\nEnter the array elements>>");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   printf("\nEnter the key value to find in the given array>>");
   scanf("%d",&key);
   for(i=0;i<n;i++){
       if(arr[i]==key){
           printf("\nThe entered key value %d found at position %d",key,i+1);
           exit(0);
       }
   }
   printf("\nThe entered key value not found.");
}
