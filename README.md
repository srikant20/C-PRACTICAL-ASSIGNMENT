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

5. Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).

> Source Code

```C
#include<stdio.h>
#define PI 3.17

int main(){
    int minor=4,major=6,area;
    area=PI*minor*major;
    printf("Area of Ellipse if Minor axes is %d cm and Major axes if %d cm: %d",minor,major,area);
    return 0;
}
```

> Expected Output:

    Area of Ellipse if Minor axes is 4 cm and Major axes if 6 cm: 76

6. Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I = P*T*R/100)

> Source Code:

```C
#include<stdio.h>

int main(){
    int p=4000,t=2;
    float r=5.5,i;
    i=(p*r*t)/100;
    printf("Simple Interest if P=%d, T=%d yrs, R=%f: %f",p,t,r,i);
    return 0;
}
```

> Expected Output:

    Simple Interest if P=4000, T=2 yrs, R=5.500000: 440.000000

7. **Write a program to produce the output as shown below:**

x y expressions results

6 | 3 | x=y+3 | x=6
6 | 3 | x=y-2 | x=1
6 | 3 | x=y\*5 | x=15 6 | 3 | x=x/y | x=2 6 | 3 | x=x%y | x=0

> Source Code:

```C
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
```

> Expected Output:

    x y expressions results
    6 | 3 | x=y+3 | x=6
    6 | 3 | x=y-2 | x=1
    6 | 3 | x=y*5 | x=15
    6 | 3 | x=x/y | x=2
    6 | 3 | x=x%y | x=0

8. **Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a program to display the following:**

X y z= 3.0| 12.5| 523.3|
A B C= 300.0| 1200.5| 5300.3|

X y z= |3.00 |12.50 |523.30
A B C= |300.00 |1200.50 |52300.30

> Source Code:

```C
#include<stdio.h>

int main(){
    float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;
    printf("X y z= %.1f| %.1f| %.1f|\n",x,y,z);
    printf("A B C= %.1f| %.1f|%.1f|\n ",A,B,C);
    printf("-----------------------------------\n");
    printf("X y z=|%.2f |%.2f |%.2f\n",x,y,z);
    printf("A B C=|%.2f |%.2f |%.2f\n",A,B,C);
    return 0;
}
```

> Expected Output:

    X y z= 3.0| 12.5| 523.3|
    A B C= 300.0| 1200.5|5300.3|
    -----------------------------------
    X y z=|3.00 |12.50 |523.30
    A B C=|300.00 |1200.50 |5300.30

9. **Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, calculate and display the following result using macros (preprocessor directives)**

a. c = PI * mult(a,b) //the macro mult(a,b) perform the multiplication of a & b(a*b)
b. c= PI* sum(a,b) //the macro mult(a,b) perform the sum of a & b (a+b)
c. c= PI *sub(a,b) //the macro mult(a,b) perform the subtraction of a & b (a-b)

> Source Code:

```C
#include<stdio.h>
#define PI 3.1415
#define mult(a,b) a*b
#define sum(a,b) a+b
#define sub(a,b) a-b

int main(){
    int a=8,b=4;
    double c;
    c=PI*mult(a,b);
    printf("Multiplication of %d and %d is: %.2lf\n",a,b,c);
    c=PI*sum(a,b);
    printf("Sum of %d and %d is: %.2lf\n",a,b,c);
    c=PI*sub(a,b);
    printf("Subtraction of %d and %d is: %.2lf\n",a,b,c);
    return 0;
}
```

> Expected Output:

    Multiplication of 8 and 4 is: 100.53
    Sum of 8 and 4 is: 29.13
    Subtraction of 8 and 4 is: 21.13

10. Demonstrate the differences among getch(), getche(), getchar(). Demonstrate the difference between scanf() & gets(), printf() & puts().

Ans:

getch(), getche(), and getchar() are all functions used to read a single character from the keyboard. However, they differ in their behaviour:
: • getch() reads a single character from the keyboard without echoing it to the screen. It is a non-standard function and is present in the <conio.h> header file, which is mostly used by MS-DOS compilers like Turbo C.
: • getche() reads a single character from the keyboard and echoes it to the screen immediately without waiting for the enter key. Like getch(), it is also a non-standard function present in the <conio.h> header file.
: • getchar() reads a single character from the keyboard and echoes it to the screen. It is a standard function and is present in the <stdio.h> header file.
scanf() and gets() are both functions used to read input from the user. However, they differ in their behavior:
: • scanf() reads input from the user and stores it in the specified variable(s). It is a standard function and is present in the <stdio.h> header file.
: • gets() reads input from the user and stores it in the specified character array. It is a non-standard function and is present in the <stdio.h> header file. However, it is considered unsafe because it does not check the length of the input string, which can lead to buffer overflow vulnerabilities.
printf() and puts() are both functions used to output data to the screen. However, they differ in their behavior:
: • printf() outputs formatted data to the screen. It is a standard function and is present in the <stdio.h> header file.
: • puts() outputs a string to the screen followed by a newline character. It is a standard function and is present in the <stdio.h> header file .

11. **Write a program to take a character input from keyboard and check if it is a number or alphabet or special character using ASCII CODE Again check if the character is using character functions below:**

a. Alphanumeric => isalnum()
b. Blank character => isblank()
c. Alphabetic => isalpha()
d. Control character => iscntrl()
e. Number-digit => isdigit()
f. Upper case => isupper()
g. Lower case => islower()
h. Hexadecimal digit => ixdigit()
i. Graphical character => isgraph()

> Source Code:

```C
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
```

> Expected Output:

    Enter Any Character: 5
    It's a Number
    Checking Using Character Function
    It's A Digits

12. Write a C program to find the area and volume of sphere. Formulas are:- Area = 4*PI*R*R Volume = 4/3*PI*R*R\*R.

**Note :** Assume PI=3.14

```C
#include<stdio.h>
#define PI 3.14

int main(){
    float R,Area,Volume;
    printf("Enter Radius of Sphere: ");
    scanf("%f",&R);
    Area= 4*PI*R*R;
    Volume=(4/3)*PI*R*R*R;
    printf("Area of Sphere is: %.2f\n",Area);
    printf("Volume of Sphere is: %.2f\n",Volume);
    return 0;
}
```

> Expected Output:

    Enter Radius of Sphere: 5
    Area of Sphere is: 314.00
    Volume of Sphere is: 392.50

13. Write a C program to print the multiply value of two accepted numbers

> Source Code:

```C
#include<stdio.h>

    int main(){
        int num1,num2,mul;
        printf("Enter First Number: ");
        scanf("%d",&num1);
        printf("Enter Second Number: ");
        scanf("%d",&num2);
        mul= num1*num2;
        printf("Multiplication of %d and %d is: %d",num1,num2,mul);
        }
```

> Expected Output:

    Enter First Number: 5
    Enter Second Number: 20
    Multiplication of 5 and 20 is: 100

14. Write a C program to convert centigrade into Fahrenheit. Formula: C= (F-32)/1.8.

> Source Code:

```C
#include<stdio.h>

int main(){
    float c,f;
    printf("Enter Centigrade: ");
    scanf("%f",&c);
    f= (c*1.8)+32;
    printf("%.2f Centigrade into Fahrenheit: %f ",c,f);
    return 0;
}
```

> Expected Output:

    Enter Centigrade: 37
    37.00 Centigrade into Fahrenheit: 98.599998

15. Write a C program to read in a three-digit number and produce the following output (assuming that the input is 347) 3 hundreds 4 tens 7 units

> Source Code:

```C
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
```

> Expected Output:

    Enter 3 Digit No: 347
    3 Hundreds 4 Tens 7 Units

16. Write a C program to read in two integers and display one as a percentage of the other. Typically your output should look like 20 is 50.00% of 40 assuming that the input numbers were 20 and 40. Display the percentage correct to 2 decimal places.

> Source Code:

```C
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
```

> Expected Output:

    Enter First Number: 50
    Enter Second Number: 100
    50 is 50.00% of 100.

17. Write a C program to find out whether the character pressed through the keyboard is a digit or not
    (using conditional operator).

> Source Code:

```C
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

```

> Expected Output:

    Enter Any Character: S
    It's a Character.

18. Write a C program to swap variable values of i and j.

> Source Code:

```C
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
```

> Expected Output:

    Enter Value for i: 25
    Before Swap
    Value of i is: 25
    Value of j is: 50
    After Swap
    Enter Value for j: 50
    Value of i is: 50
    Value of j is: 25

19. Write a program to read a floating point number from keyboard and print its integer and fractional part separately.

> Source Code:

```C
#include<stdio.h>

int main(){
    float num,fraction;
    int intNum;
    printf("Enter Any Floating Point Number: ");
    scanf("%f",&num);
    printf("You Have Entered : %f.\n",num);
    intNum= (int)num;
    printf("Entered Number Integer Value is: %d\n",intNum);
    fraction= num-intNum;
    printf("Entered Number Fraction Part Value is: %f",fraction);
    return 0;
}
```

> Expected Output:

    Enter Any Floating Point Number: 12.56
    You Have Entered : 12.560000.
    Entered Number Integer Value is: 12
    Entered Number Fraction Part Value is: 0.560000

20. Write a program to read and print a character using getchar(), getch(), getche(), putchar(), putch().

> Source Code:

```C
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
```

> Expected Output:

    Enter a character: s

    You entered: s
    Enter a character:
    You entered: k
    Enter a character: m
    You entered: m

21. Write a program to find the Simple Interest(Simple Interest,I=P*N*R/100) where P=Principal,N=no: of years, R= Rate of Interest.

> Source Code:

```C
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
    printf("Simple Interest: %f\n",si);
}
```

> Expected Output:

    Enter Principal: 10000
    Enter No of Years: 2
    Enter Rate: 5
    Simple Interest: 1000.00
