/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/
#include <stdio.h>

main()
 {
    int var = 10;
    int *ptr = &var; 

    printf("Initial value of var: %d\n", var);

    *ptr = 20; 

    printf("Modified value of var: %d\n", var);

    return 0;
}
