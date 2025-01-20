/* Implement the same program using a recursive function.*/
#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    } else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

void generate_pascals_triangle(int n, int row) {
    int i, space;

    
    if (row > n) {
        return;
    }


    for (space = 0; space < n - row; space++) {
        printf(" ");
    }

    for (i = 0; i < row; i++) {
        printf("%d ", combination(row - 1, i));
    }

    printf("\n");

    generate_pascals_triangle(n, row + 1);
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    generate_pascals_triangle(n, 1);

    return 0;
}

