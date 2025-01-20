/*Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
*/
#include <stdio.h>

main()
 {
    int arr[10], max, min, i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
