/*Write a C program that counts the number of words in a sentence entered by the user.*/


#include <stdio.h>

int count_words(char sentence[]) {
    int words = 0;
    int i = 0;

    while (sentence[i] == ' ') {
        i++;
    }

    while (sentence[i] != '\0') {
      
        if (sentence[i] != ' ') {
            words++;
           
            while (sentence[i] != ' ' && sentence[i] != '\0') {
                i++;
            }
        } else {
            i++; 
        }
    }

    return words;
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    int num_words = count_words(sentence);

    printf("Number of words: %d\n", num_words);

    return 0;
}

