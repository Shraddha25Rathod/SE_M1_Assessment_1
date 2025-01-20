/* Marks > 75 and <= 90: Grade B*/
#include <stdio.h>

main() 
{
    float marks;

    printf("Enter the marks of the student: ");
    scanf("%f", &marks);

    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks >= 60 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks >= 45 && marks < 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
