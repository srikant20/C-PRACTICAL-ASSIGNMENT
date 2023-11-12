#include<stdio.h>
#define PI 3.14

int main(){
    float R,Area,Volume;
    printf("Enter Radius of Sphere: ");
    scanf("%f",&R);
    Area= 4*PI*R*R;
    Volume=(4/3)*PI*R*R*R;
    printf("Area of Sphere is: %.2f\n",Area);
    printf("Volume of Sphere is: %.2f\n",Volume);
    return 0;
}