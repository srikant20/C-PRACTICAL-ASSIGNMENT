#include<stdio.h>
#define PI 3.1415
#define mult(a,b) a*b
#define sum(a,b) a+b 
#define sub(a,b) a-b

int main(){
    int a=8,b=4;
    double c;
    c=PI*mult(a,b);
    printf("Multiplication of %d and %d is: %.2lf\n",a,b,c);
    c=PI*sum(a,b);
    printf("Sum of %d and %d is: %.2lf\n",a,b,c);
    c=PI*sub(a,b);
    printf("Subtraction of %d and %d is: %.2lf\n",a,b,c);
    return 0;
}