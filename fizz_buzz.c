#include <stdio.h>

void main()
{
    int num;
    printf("Enter the number>>");
    scanf("%d",&num);
    if(num%3==0){
        printf("FIZZ");
    }
    if(num%5==0){
        printf("BUZZ");
    }
    if(num%3==0 && num%5==0){
        printf("FIZZ BUZZ");
    }
    else{
        printf("%d",num);
    }
}
