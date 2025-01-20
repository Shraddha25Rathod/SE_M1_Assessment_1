/*Modify the program to find the longest word in the sentence.*/

#include <stdio.h>


void analyze_sentence(char sentence[]) {
    int words = 0;
    int max_length = 0;
    char longest_word[100];
    int i = 0;
    int word_length = 0;

   
    while (sentence[i] == ' ') {
        i++;
    }

    while (sentence[i] != '\0') {
   
        if (sentence[i] != ' ') {
            word_length++;
          
            if (word_length > max_length) {
                max_length = word_length;
            
                int j = 0;
                while (word_length > 0) {
                    longest_word[j] = sentence[i - word_length + 1];
                    j++;
                    word_length--;
                }
                longest_word[j] = '\0'; 
            }
        } else {
            words++;
            word_length = 0;
            i++; 
        }
        i++;
    }

    words++;

    printf("Number of words: %d\n", words);
    printf("Longest word: %s\n", longest_word);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    analyze_sentence(sentence);

    return 0;
}
