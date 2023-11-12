#include<stdio.h>
#define PI 3.17

int main(){
    int minor=4,major=6,area;
    area=PI*minor*major;
    printf("Area of Ellipse if Minor axes is %d cm and Major axes if %d cm: %d",minor,major,area);
    return 0;
}