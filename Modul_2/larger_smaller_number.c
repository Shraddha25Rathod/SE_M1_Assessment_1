/*Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.*/
#include <stdio.h>

main() 
{
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    largest = num1;
    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;

    smallest = num1;
    if (num2 < smallest) smallest = num2;
    if (num3 < smallest) smallest = num3;

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

}
