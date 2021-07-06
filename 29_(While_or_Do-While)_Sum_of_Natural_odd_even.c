                                        /*Sum of n natual/even/odd numbers*/

#include <stdio.h>

void main(){
    unsigned int num,sum,even_sum,odd_sum,i;
    printf("Enter the number>>");
    scanf("%d",&num);
    i = 1;
    sum = 0;
    even_sum = 0;
    odd_sum = 0;
    /*
    while (i<=num){
        if (i%2==0){
            even_sum = even_sum + i;
        }
        else if (i%2!=0){
            odd_sum = odd_sum + i;
        }
        sum = sum + i;
        i++;
    }
    */


    do{
        if (i%2==0){
            even_sum = even_sum + i;
        }
        else if (i%2!=0){
            odd_sum = odd_sum + i;
        }
        sum = sum + i;
        i++;
    }while(i<=num);


    printf("The sum of \nEven numbers = %d\nOdd numbers = %d\n%d Natural numbers = %d",even_sum,odd_sum,num,sum);

}
