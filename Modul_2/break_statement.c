/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/
#include <stdio.h>
main() 
{
    printf("Program using break statement:\n");
    for (int i = 1; i <= 10; i++)
     {
        if (i == 5) 
        {
            break;
        }
           printf("%d\n", i);
        }

    printf("\nProgram using continue statement:\n");
    for (int i = 1; i <= 10; i++)
     {
        if (i == 3) 
        {
            continue;
        }
        printf("%d\n", i);
    }

    printf("\nProgram using break and continue statements:\n");
    for (int i = 1; i <= 10; i++) 
    {
        if (i == 3) 
        {
            continue;
        }
        if (i == 5);
        {
            break;
        }
        printf("%d\n", i);
    }

}

