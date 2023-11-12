#include<stdio.h>

int main(){
    char ch;
    printf("Enter Any Character: ");
    scanf("%c",&ch);
    if((int)ch >=48 && (int)ch <=57){
        printf("It's A Digit.");
    }else{
        printf("It's a Character.");
    }
    return 0;
}