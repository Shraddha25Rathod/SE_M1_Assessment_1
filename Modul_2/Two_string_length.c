/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/
#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[100];
    char str2[100];

    char concatenated_str[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 

    strcpy(concatenated_str, str1);

    strcat(concatenated_str, str2);

    printf("Concatenated string: %s\n", concatenated_str);

    printf("Length of concatenated string: %lu\n", strlen(concatenated_str));

    return 0;
}


