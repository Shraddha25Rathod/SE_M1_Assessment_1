/*Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 
    int sum = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of elements. Please enter a value between 1 and 100.\n");
        return 1;
    }

   printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
        
    }


    printf("The sum of all array elements is: %d\n", sum);

    return 0;
}


