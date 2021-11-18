#include <stdio.h>
#include <stdlib.h>

void read(int *a,int n){
 int i;
 printf("Enter the array elements>>");
 for(i=0;i<n;i++){
  scanf("%d",a+i);
 }
}

void display(int *a,int n){
 int i;
 printf("\n\nThe array is>>");
 for(i=0;i<n;i++){
  printf("%d\t",*(a+i));
 }
 printf("\n\n");
}

void search(int *a,int n,int key){
 int i;
 for(i=0;i<n;i++){
  if(key==*(a+i)){
   printf("The entered key %d found at position %d",key,i);
   printf("\n\n");
   return;
  }
 }
 printf("The key not found\n");
 printf("\n\n");
}

void sort(int *a,int n){
 int i,j,flag=0,temp;
 for(i=0;i<n-1;i++){
  int flag=0;
  for(j=0;j<n-i-1;j++){
   if((a+j)>(a+j+1)){
    temp=*(a+j);
    *(a+j) = *(a+j+1);
    *(a+j+1)=temp;
    flag=1;
   }
  }
  if(flag==0){
   break;
  }
 }
 display(a,n);
}

void insert(int *a,int *n,int val,int pos){
 int i;
 for(i=*(n-1);i>=pos;i--){
  (a+i+1)=(a+i);
 }
 *(a+pos)=val;
 (*n)++;
}

void delete1(int *a,int *n,int pos){
 int i;
 if(pos>0 && pos<=*n){
  for(i=pos;i<*n;i++){
   (a+i)=(a+i+1);
  }
 --(*n);
 }
 else{
  printf("Invalid position entered");
 }
}

void delete2(int *a,int *n,int key){
 int flag=0;
 int i;
 for(i=0;i<*n;i++){
  if(key==*(a+i)){
   flag=1;
   break;
  }
 }
 if(flag==0){
  printf("The entered number is not in the array!..");
 }
 else{
  delete1(a,n,i);
 }

}

void main(){
 int arr[20],i,n,choice,key,val,pos;
 for(;;){
  printf("\n1.Read \n2.Display \n3.search\n4.sort\n5.insert\n6.Delete number by providing position\n7.Delete element by providing number\n");
  printf("Enter your choice>>");
  scanf("%d",&choice);

  switch(choice){
   case 1:printf("\nEnter the size of the array>>");
     scanf("%d",&n);
     read(arr,n);
     break;
   case 2:display(arr,n);
     break;
   case 3:printf("\nEnter the key to find>>");
     scanf("%d",&key);
     search(arr,n,key);
     break;
   case 4:sort(arr,n);break;
   case 5:printf("Enter the value to insert>>");
     scanf("%d",&val);
     printf("Enter the position number>>");
     scanf("%d",&pos);
     insert(arr,&n,val,--pos);
     break;
   case 6:printf("Enter the position number to delete its value>>");scanf("%d",&pos);delete1(arr,&n,--pos);break;
   case 7:printf("Enter the number to delete>>");
     scanf("%d",&key);delete2(arr,&n,key);
     delete2(arr,&n,key);
     break;
   default:exit(0);

  }
 }
}
