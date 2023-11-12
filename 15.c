#include<stdio.h>

int main(){
    int num,hundreds,tens,units;
    printf("Enter 3 Digit No: ");
    scanf("%d",&num);
    hundreds= num/100;
    units=num%10;
    num/=10;
    tens= num%10;
    printf("%d Hundreds %d Tens %d Units\n",hundreds,tens,units);
    return 0;
}