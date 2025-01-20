/*Extend the program to handle invalid operator inputs.*/
#include <stdio.h>

main()
 {
    double num1, num2;
    char operator;

    printf("Simple Calculator Program\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    while (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') {
        printf("Error! Invalid operator. Please enter a valid operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);
    }

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%.2f %% %.2f = %.2f\n", num1, num2, (int)num1 % (int)num2);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;
    }

    return 0;
}


