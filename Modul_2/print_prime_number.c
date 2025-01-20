/*Modify the program to print all prime numbers between 1 and a given number.*/

#include <stdio.h>

int is_prime(int num) {
    int j, flag = 0;
    for (j = 2; j * j <= num; j++) 
    {
        if (num % j == 0) {
            flag = 1;
            break;
        }
    }
    return flag == 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);
    (intj=2;j <= num; j++) 
    {
        if (is_prime(j)) {
            printf("%d ", j);
        }
    }
    printf("\n");

    return 0;
}

