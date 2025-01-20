/* Extend the program to also count digits and special characters.*/

#include <stdio.h>

void count_characters(char str[]) {
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int special_chars = 0;
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
       
        else if (c >= '0' && c <= '9') {
            digits++;
        }
       
        else {
            special_chars++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    count_characters(str);

    return 0;
}

