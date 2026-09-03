// Write a C program to input two numbers and perform the following operations: Addition, Subtraction, Multiplication, Division, Modulus, Power using pow(), Square root using sqrt(), Absolute value using abs(), Floor value using floor(), Ceiling value using ceil()
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter two interger digit numbers: ");
    scanf("%d %d", &a, &b);

    printf("Additon = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0)
    {
        printf("Division = %.2f\n", (float)a / b);
        printf("Modulus = %d\n", a % b);
    }

    else{
        printf("Division is not possible \n");
        printf("Modulus is not possible \n");
    }

    printf("Power = %.2f\n", pow(a,b));
    printf("Square root of a = %.2f\n", sqrt(a));
    printf("Absolute value of a = %.2f\n", abs(a));
    printf("Floor value of a = %.2f\n", floor(a));
    printf("Ceiling value of a = %.2f\n", ceil(a));

    return 0;
}
