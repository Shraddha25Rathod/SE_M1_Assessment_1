/*Write the program without using built-in string handling functions.*/


#include <stdio.h>

int get_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void reverse_string(char str[]) {
    int length = get_length(str);
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
    int i = 0;
    char c;
    while ((c = getchar()) != '\n') {
        str[i] = c;
        i++;
    }
    str[i] = '\0'; 

    printf("Original string: %s\n", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

