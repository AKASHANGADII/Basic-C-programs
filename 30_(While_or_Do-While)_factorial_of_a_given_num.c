                                            /*Factorial of a given number*/

#include <stdio.h>

void main(){
    unsigned int num,prod,i;
    printf("Enter the number to find factorial>>");
    scanf("%d",&num);
    prod = 1;
    i = 1;
    do{
        prod = prod * i;
        i++;
    }while(i<=num);

    /*
    while (i<=num){
        prod = prod * i;
        i++;
    }
    */

    printf("Factorial of %d = %d",num,prod);
}
