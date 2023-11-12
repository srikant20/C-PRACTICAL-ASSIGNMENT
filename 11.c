#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter Any Character: ");
    scanf("%c",&ch); 
    if((int)ch >=48 && (int)ch<=57){
        printf("It's a Number\n");
    }
    else if((int)ch >=65 && (int)ch<=90 || (int)ch >=97 &&(int)ch <=122 ){
        printf("It's a Alphabet\n");
    }else{
        printf("it's a Special Character\n");
    }

    printf("Checking Using Character Function\n");

    if(isalnum(ch) ==1){
        printf("It's a Alphanumeric\n");
    }
    if(isblank(ch)==1){
        printf("It's Blank\n");
    }
    if(isalpha(ch)==1){
        printf("It's A Alphabet\n");
    }
    if(iscntrl(ch)==1){
        printf("It's A Control Character\n");
    }
    if(isdigit(ch)==1){
        printf("It's A Digits\n");
    }
    if(isupper(ch)==1){
        printf("It's A Upper Case Digits\n");
    }
    if(islower(ch)==1){
        printf("It's a Lowercase Digits\n");
    }
    if(isxdigit(ch)==1){
        printf("It's a Hexadecimal Digit\n");
    }
    if(isgraph(ch)==1){
        printf("It's a Graphical Character\n");
    }
    return 0;
}
