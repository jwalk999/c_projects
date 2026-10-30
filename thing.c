/*
This is my first C program. Hurray!

This is a block comment.

*/

// this is a single line comment

// basic C program


# include <stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("welcome");

    int firstNum = 1;

    int secondNum;
    secondNum = 2;

    printf("%d\n", firstNum);
    printf("%d\n", secondNum);
    // Must use variable specifier to print numbers

    int myNum = 15;
    float myFloat = 3.14;
    char myLetter = 'D';

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myLetter);

    printf("This is how you print words and nums: %d\n", myNum);
    printf("This is how you do both: %c - %d\n", myLetter, myNum);

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    int a = 5, b = 6, c = 7;
    printf("%d\n", a + b + c);

    // Scientific notation
    double p = 3e6;
    printf("%lf\n", p);
    float f = 3e6;
    printf("%f\n", f);

    // Floating point precision
    float q = 3.1415;
    printf("%.3f \n", q);
    printf("%.2f \n", q);
    printf("%.1f \n", q);

    return 0;
}