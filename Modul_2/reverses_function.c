/*Write a C program that takes a string as input and reverses it using a function.
*/
#include <stdio.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
       
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Original string: %s\n", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}


