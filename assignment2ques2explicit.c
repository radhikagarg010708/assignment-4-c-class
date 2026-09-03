//Variable Scope Write a C program without using any user-defined function to demonstrate the difference between: local variable, global variable and static variable Your program should clearly show how the values of these variables change inside main() and inside a block. 
#include <stdio.h>
int main ()
{
    int a;
    float c1, c2;
    printf("Enter a integer number: ");
    scanf("%d", &a);
    printf(" Enter a floating-point number: ");
    scanf("%f", &c1);
    c2 = a + c1;

    printf("\nExplicit Type Conversion\n");
    printf("Addition = %.2f\n", c2);
    c2 = a - c1;
    printf("Subtraction = %.2f\n", c2);
    c2 = a * c1;

    printf("Multiplication = %.2f\n", c2);
    c2 = a / c1;
    printf("Division = %.2f\n", c2);

    return 0; 
}