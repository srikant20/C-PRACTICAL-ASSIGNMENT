#include<stdio.h>

int main(){
    int p=4000,t=2;
    float r=5.5,i;
    i=(p*r*t)/100;
    printf("Simple Interest if P=%d, t=%d yrs, r=%f: %f",p,t,r,i);
    return 0;
}