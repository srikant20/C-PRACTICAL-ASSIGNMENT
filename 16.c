#include<stdio.h>

int main(){
    int num1,num2;
    float percentage;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    if(num1>num2){
        percentage= ((float)num2/num1)*100;
        printf("%d is %.2f%% of %d.",num2,percentage,num1);
    }else{
        percentage=((float)num1/num2)*100;
        printf("%d is %.2f%% of %d.",num1,percentage,num2);
    }
    return 0;
}