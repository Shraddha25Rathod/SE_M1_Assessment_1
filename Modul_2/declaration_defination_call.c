/*Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/

#include <stdio.h>

long factorial(int);

main()
 {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    long result = factorial(num);
    printf("Factorial of %d = %ld\n", num, result);

    return 0;
}


long factorial(int n) {
    long fact = 1;
    int i;
    for (i = 1; i <= n; i++)
     {
        fact *= i;
     }
    return fact;
}



