/*Extend the program to sort the array in ascending order*/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    int i = 0;
    while (i < n - 1) {
        int j = 0;
        while (j < n - i - 1) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
            j++;
        }
        i++;
    }
}

void selection_sort(int arr[], int n) {
    int i = 0;
    while (i < n - 1) {
        int min_idx = i;
        int j = i + 1;
        while (j < n) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
            j++;
        }
        swap(&arr[min_idx], &arr[i]);
        i++;
    }
}

int main() {
    int arr[10], max, min, i = 0, n = 10;

    printf("Enter 10 integers:\n");
    while (i < n) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    max = arr[0];
    min = arr[0];

    i = 1;
    while (i < n) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        i++;
    }

 
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

  
    bubble_sort(arr, n);

  
    printf("Sorted array in ascending order (Bubble Sort):\n");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    
    selection_sort(arr, n);

   
    printf("Sorted array in ascending order (Selection Sort):\n");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}
