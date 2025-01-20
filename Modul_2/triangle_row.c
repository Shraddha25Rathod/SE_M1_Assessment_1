/*Write a C program that generates Pascal’s Triangle up to N rows using loops.
*/
#include <stdio.h>

void generate_pascals_triangle(int n) {
    int i, j, k, space;

   
    for (i = 0; i < n; i++) {
   
        for (space = 0; space < n - i; space++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
           
            int num = 1;
            if (j > 0) {
                num = (i * (i - j + 1)) / j;
            }

            printf("%d ", num);
        }

        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);


    generate_pascals_triangle(n);

    return 0;
}
