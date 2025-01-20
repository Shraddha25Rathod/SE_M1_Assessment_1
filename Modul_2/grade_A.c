/*Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
o Marks > 90: Grade A*/
#include <stdio.h>

main() 
{
    float marks;

    printf("Enter the marks of the student: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
