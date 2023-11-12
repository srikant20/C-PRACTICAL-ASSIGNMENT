#include<stdio.h>

int main(){
    float num,fraction;
    int intNum;
    printf("Enter Any Floating Point Number: ");
    scanf("%f",&num);
    printf("You Have Entered : %f.\n",num);
    intNum= (int)num;
    printf("Entered Number Integer Value is: %d\n",intNum);
    fraction= num-intNum;
    printf("Entered Number Fraction Part Value is: %f",fraction);
    return 0;
}