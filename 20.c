#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("\nYou entered: ");
    putchar(ch);
    printf("\nEnter a character: ");
    ch = getch();
    printf("\nYou entered: ");
    putch(ch);
    printf("\nEnter a character: ");
    ch = getche();
    printf("\nYou entered: ");
    putch(ch);
    return 0;
}
