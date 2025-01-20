/*Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
*/

#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Simple Calculator Program\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

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
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}
