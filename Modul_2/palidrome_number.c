/*Write a C program that takes a number as input and checks whether it is a palindrome using
a function.*/
#include <stdio.h>

int is_palindrome(int num) {
    int reverse = 0;
    int original = num;

    while (num != 0) {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    return (original == reverse);
}

main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
