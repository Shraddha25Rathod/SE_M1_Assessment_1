/*Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.*/

#include<stdio.h>
#define PI 3.14159
main()
{
	
    int integerVariable = 10; 
    char characterVariable = 'A'; 
    float floatVariable = 3.14159; e

    
    const int constantInteger = 20;

    printf("Integer Variable: %d\n", integerVariable);
    printf("Character Variable: %c\n", characterVariable);
    printf("Float Variable: %f\n", floatVariable);
    printf("Constant Integer: %d\n", constantInteger);
    printf("Constant PI: %f\n", PI);

}
