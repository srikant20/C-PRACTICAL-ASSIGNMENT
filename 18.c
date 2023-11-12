#include<stdio.h>

int main(){
    int i,j,temp;
    printf("Enter Value for i: ");
    scanf("%d",&i);
    printf("Enter Value for j: ");
    scanf("%d",&j);
    printf("Before Swap\n");
    printf("Value of i is: %d\nValue of j is: %d\n",i,j);
    temp=i;
    i=j;
    j=temp;
    printf("After Swap\n");
    printf("Value of i is: %d\nValue of j is: %d\n",i,j);
    return 0;
}