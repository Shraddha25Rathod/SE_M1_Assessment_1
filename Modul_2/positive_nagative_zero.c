/*Whether the number is positive, negative, orzero.*/
#include <stdio.h>

main()
 {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}
