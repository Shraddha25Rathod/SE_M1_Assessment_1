/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements. */
#include<stdio.h>
main()
{

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   int i;
    printf("Elements of the two-dimensional array (3x3 matrix):\n");
    for ( i = 0; i < 3; i++) 
    {
        for ( i= 0; i< 3; i++) {
            printf("matrix[%d][%d] = %d\n", i, i, matrix[i][i]);
        }
    }

    int sum = 0;
    for (i = 0; i < 3; i++) {
        for ( i = 0; i < 3; i++) {
            sum += matrix[i][i];
        }
    }

    printf("Sum of all elements in the matrix: %d\n", sum);

    return 0;

}
