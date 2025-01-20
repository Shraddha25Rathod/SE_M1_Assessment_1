/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/
#include <stdio.h>

main() 
{
    FILE *file;

    char str[] = "Hello, World!";

    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error creating file\n");
        exit(1);
    }

    fputs(str, file);
    printf("String written to file: %s\n", str);

    fclose(file);
    printf("File closed\n");

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    char contents[50];
    fgets(contents, sizeof(contents), file);
    printf("File contents: %s\n", contents);

    fclose(file);
    printf("File closed again\n");

    return 0;
}

