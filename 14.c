#include<stdio.h>

int main(){
    float c,f;
    printf("Enter Centigrade: ");
    scanf("%f",&c);
    f= (c*1.8)+32;
    printf("%.2f Centigrade into Fahrenheit: %f ",c,f);
    return 0;
}