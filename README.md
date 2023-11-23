### C PRACTICAL ASSIGNMENT

1. Write a program to display “hello world” in C.

> Source Code:

```C
#include<stdio.h>

int main(){
    printf("Hello World");
    return 0;
}

```

> Expected Output:

    Hello World

2. Write a program to add two numbers (5&7) and display its sum.

> Source Code:

```C
#include<stdio.h>

int main(){
    int num1=5,num2=7,sum;
    sum=num1+num2;
    printf("Sum of %d and %d is: %d",num1,num2,sum);
    return 0;
}
```

> Expected Output:

    Sum of 5 and 7 is: 12

3. Write a program to multiply two numbers (10&8) and display its product.

> Source Code:

```C
#include<stdio.h>

int main(){
    int num1=10, num2=8,mul;
    mul=num1*num2;
    printf("Multiplication of %d and %d is: %d",num1,num2,mul);
    return 0;
}
```

> Expected Output

    Multiplication of 10 and 8 is: 80

3. Write a program to multiply two numbers (10&8) and display its product.

> Source Code

```C
#include<stdio.h>

int main(){
    int num1=10, num2=8,mul;
    mul=num1*num2;
    printf("Multiplication of %d and %d is: %d",num1,num2,mul);
    return 0;
}
```

> Expected Output:

    Multiplication of 10 and 8 is: 80

4. Write a program to calculate area of a circle having its radius (r=5).

> Source Code:

```C
#include<stdio.h>
#define PI 3.14

int main(){
    int r=5;
    int area= PI*r*r;
    printf("Area of Circle if Radius is %d: %d",r,area);
    return 0;
}
```

> Expected Output:

    Area of Circle if Radius is 5: 78
