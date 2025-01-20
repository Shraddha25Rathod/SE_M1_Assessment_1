/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/
#include<stdio.h>
struct Student {
    char name[50];
    int roll_number;
    float marks;
};
main()
{
  
    struct Student students[3];

    
    for (i = 0; i < 3; i++)
     {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    
    printf("\nDetails of 3 Students:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
	

