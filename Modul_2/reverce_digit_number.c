/*Extend the program to reverse the digits of the number.*/
#include <stdio.h>

main()
 {
    int num, sum = 0, reversed_num = 0, original_num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;


    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

   
    num = original_num;
    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    printf("The reversed number is: %d\n", reversed_num);

    return 0;
}

