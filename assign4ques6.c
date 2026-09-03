//Write a C program to input marks of a student in three subjects. Use relational and logical operators to check whether the student: 
#include<stdio.h>
int main()
{
    int m1, m2, m3;
    float average;
    printf("Enter marks of three subject :");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
    {
        printf("Student passed all the subjects\n");
        if (average >=75)
        {
          printf("Student scored distinction \n");
        }
        else
        {
            printf("Student did not scred distinction\n");
        }
    }
    else
    {
        printf("Student failed in one or more subjects\n");
    }
    printf("Average marks = %.2f\n");

    return 0;
}