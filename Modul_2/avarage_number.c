/* Modify the program to also find the average of the numbers.*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 
    int sum = 0;
    float average;

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

    average = (float)sum / n;

    printf("The sum of all array elements is: %d\n", sum);
    printf("The average of all array elements is: %.2f\n", average);

    return 0;
}
