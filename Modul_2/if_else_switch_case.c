/* Solve the problem using both if-else and switch-case statements.*/
#include <stdio.h>


void find_largest_smallest_if_else(int num1, int num2, int num3) {
    int largest, smallest;

 
    largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;

 
    smallest = num1;
    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;

    printf("Using if-else:\n");
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
}

void find_largest_smallest_switch_case(int num1, int num2, int num3) {
    int max = 0;
    int min = 0;

    
    if (num1 >= num2 && num1 >= num3) max = 1;
    else if (num2 >= num1 && num2 >= num3) max = 2;
    else max = 3;


    if (num1 <= num2 && num1 <= num3) min = 1;
    else if (num2 <= num1 && num2 <= num3) min = 2;
    else min = 3;

    printf("Using switch-case:\n");
    switch (max) {
        case 1:
            printf("The largest number is: %d\n", num1);
            break;
        case 2:
            printf("The largest number is: %d\n", num2);
            break;
        case 3:
            printf("The largest number is: %d\n", num3);
            break;
    }

    switch (min) {
        case 1:
            printf("The smallest number is: %d\n", num1);
            break;
        case 2:
            printf("The smallest number is: %d\n", num2);
            break;
        case 3:
            printf("The smallest number is: %d\n", num3);
            break;
    }
}

main()
 {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    find_largest_smallest_if_else(num1, num2, num3);
    find_largest_smallest_switch_case(num1, num2, num3);

    return 0;
}
