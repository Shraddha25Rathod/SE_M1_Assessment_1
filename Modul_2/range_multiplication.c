/*: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/
#include <stdio.h>

main()
 {
    int num, start, end;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Multiplication table of %d from %d to %d:\n", num, start, end);
    for (int i = start; i <= end; i++)
     {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
