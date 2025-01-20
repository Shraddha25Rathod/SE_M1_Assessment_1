/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.*/
#include <stdio.h>

void add_matrices(int mat1[2][2], int mat2[2][2], int result[2][2]) {
    int i = 0, j = 0;
    while (i < 2) {
        j = 0;
        while (j < 2) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            j++;
        }
        i++;
    }
}
void print_matrix(int mat[2][2]) {
    int i = 0, j = 0;
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("%d ", mat[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    int i = 0, j = 0;

    printf("Enter elements of matrix 1:\n");
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
            j++;
        }
        i++;
    }
    i = 0;

    printf("Enter elements of matrix 2:\n");
    while (i < 2) {
        j = 0;
        while (j < 2) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
            j++;
        }
        i++;
    }

    add_matrices(mat1, mat2, result);

    printf("Matrix 1:\n");
    print_matrix(mat1);
    printf("Matrix 2:\n");
    print_matrix(mat2);
    printf("Resultant Matrix:\n");
    print_matrix(result);

    return 0;
}

    

