                                /*Simple calculator*/

#include <stdio.h>

void main(){
    float num1,num2;
    char ch;
    VALUES:
        printf("Enter the two operands and operator(Example:6+5)>>");
        scanf("%f%c%f",&num1,&ch,&num2);

    if (num2==0 && ch=='/'){
        printf("\nZero division error\n");
        printf("Enter the right values\n");
        goto VALUES;
    }
    else {
        switch (ch){
            case '+':printf("RESULT:%.1f %c %.1f = %.1f",num1,ch,num2,num1+num2);break;
            case '-':printf("RESULT:%.1f %c %.1f = %.1f",num1,ch,num2,num1-num2);break;
            case '*':printf("RESULT:%.1f %c %.1f = %.1f",num1,ch,num2,num1*num2);break;
            case '/':printf("RESULT:%.1f %c %.1f = %.1f",num1,ch,num2,num1/num2);break;
            case '%':printf("RESULT:%.1f %c %.1f = %.1f",num1,ch,num2,(int)num1%(int)num2);break;
            default:printf("\nINVALID INPUT!!..");
        }
    }
}
