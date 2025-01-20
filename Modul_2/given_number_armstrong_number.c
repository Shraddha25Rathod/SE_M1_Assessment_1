/*Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3).*/
#include <stdio.h>

int is_armstrong(int num) {
    int original_num, remainder, result = 0, n = 0;

    original_num = num;

 
    while (original_num != 0) {
        original_num /= 10;
        n++;
    }

    original_num = num;

    
    while (original_num != 0) {
        remainder = original_num % 10;
        result += (int) (remainder * (pow(remainder, n)));
        original_num /= 10;
    }

   
    if (result == num) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;

   
    printf("Enter a number: ");
    scanf("%d", &num);

 
    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

