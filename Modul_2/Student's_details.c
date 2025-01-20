/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

main() {
    
    struct Student students[3] = {
        {"John Doe", 101, 85.50},
        {"Jane Smith", 102, 90.25},
        {"Bob Johnson", 103, 78.75}
    };

    printf("Details of 3 Students:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
