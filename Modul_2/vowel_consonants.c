/*Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.*/

#include <stdio.h>

void count_vowels_consonants(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        char c = str[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    count_vowels_consonants(str);

    return 0;
}
