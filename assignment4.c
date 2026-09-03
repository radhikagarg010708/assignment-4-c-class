//Data Type Size and Range Write a C program to display the size of the following data types using sizeof(): char, int, float, double, long int, short int. Also print the minimum and maximum values of int and char using appropriate header files.  

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Size of char     = %zu byte()s\n",  sizeof(char));
    printf("Size of int      = %zu byte()s\n", sizeof(int));
    printf("Size of float     = %zu byte()s\n", sizeof(float));
    printf("Size of double   = %zu byte()s\n",  sizeof(double));
    printf("Size of long int = %zu byte()s\n",  sizeof(long int));
    printf("Size of sort int = %zu byte()s\n",  sizeof(short int));

    printf("\nRange of int:\n");
    printf("Minimum int value = %d\n", INT_MIN);
    printf("Maximum int value = %d\n", INT_MAX);

    printf("\nRange of char:\n");
    printf("Minimum char value = %d\n", CHAR_MIN);
    printf("Maximum char value = %d\n", CHAR_MAX);

    return 0;
}