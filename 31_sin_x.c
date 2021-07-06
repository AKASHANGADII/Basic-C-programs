                        /*Program to find the value of sin(x) using the series
                            x - x^3/3! + x^5/5! -x^7/7! +............*/

#include <stdio.h>
#include <math.h>

void main(){
    float x_rad,sum,x;
    int i,num;
    printf("Enter the value of the x>>");
    scanf("%f",&x);
    printf("Enter the number of terms>>");
    scanf("%d",&num);

    x_rad = x*(3.14285/180);
    sum = 0;
    i=1;
    while(i<=num){
        sum = sum + x_rad;
        x_rad = (sum*x_rad*x_rad*(-1))/((i+1)*(i+2));
        i+=2;
    }
    printf("Sin(%.0f) = %.2f\n",x,sum);

}
