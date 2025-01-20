/*Marks > 50 and <= 75: Grade C*/
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
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks >= 35 && marks <= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

