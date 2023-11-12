#include<stdio.h>

int main(){
    int P,N,R;
    float si;
    printf("Enter Principal: ");
    scanf("%d",&P);
    printf("Enter No of Years: ");
    scanf("%d",&N);
    printf("Enter Rate: ");
    scanf("%d",&R);
    si= (P*N*R)/100;
    printf("Simple Interest: %.2f\n",si);
}