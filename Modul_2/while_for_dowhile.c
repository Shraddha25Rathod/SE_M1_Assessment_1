/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/
    
#include <stdio.h>
main() {
    
    printf("Numbers from 1 to 10 using while loop:\n");
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    
    printf("\nNumbers from 1 to 10 using for loop:\n");
    for (i = 1; i <= 10; i++)
     {
        printf("%d\n", i);
     }

    
    printf("\nNumbers from 1 to 10 using do-while loop:\n");
    int k = 1;
    do {
        printf("%d\n", k);
        k++;
    } while (k <= 10);

    return 0;
} 
