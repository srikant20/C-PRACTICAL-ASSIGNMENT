#include <stdio.h>

int main() {
    int x = 6;
    int y = 3;

    printf("x y expressions results\n");
    printf("%d | %d | x=y+3 | x=%d\n", x, y, y+3); 
    printf("%d | %d | x=y-2 | x=%d\n", x, y, y-2);
    printf("%d | %d | x=y*5 | x=%d\n", x, y, y*5);
    printf("%d | %d | x=x/y | x=%d\n", x, y, x/y);
    printf("%d | %d | x=x%%y | x=%d\n", x, y, x%y);
    return 0;
}
