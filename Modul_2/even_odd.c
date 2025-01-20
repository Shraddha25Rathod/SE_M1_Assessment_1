/*Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.*/
#include <stdio.h>
main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    
    if ((num & 1) == 0) {
        printf("%d is an even number (using bitwise AND).\n", num);
    } else {
        printf("%d is an odd number (using bitwise AND).\n", num);
    }

}
