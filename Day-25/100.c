#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortWordsByLength(char sentence[]) {
    char words[50][50]; // Holds up to 50 words, each up to 49 characters
    int wordCount = 0;
    int len = strlen(sentence);
    char currentWord[50];
    int charIdx = 0;

    // Step 1: Tokenize the sentence into individual words manually
    for (int i = 0; i <= len; i++) {
        // If we hit a space, punctuation, or null terminator, a word has ended
        if (isspace(sentence[i]) || ispunct(sentence[i]) || sentence[i] == '\0') {
            if (charIdx > 0) {
                currentWord[charIdx] = '\0'; // Null-terminate the word
                strcpy(words[wordCount], currentWord); // Save it to our array
                wordCount++;
                charIdx = 0; // Reset for the next word
            }
        } else {
            currentWord[charIdx++] = sentence[i];
        }
    }

    // Step 2: Sort the words array based on strlen() using Bubble Sort
    char temp[50];
    for (int i = 0; i < wordCount - 1; i++) {
        for (int j = 0; j < wordCount - i - 1; j++) {
            // Compare lengths of adjacent words
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap the words if the current one is longer than the next
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    // Step 3: Print the sorted words as a reconstructed sentence
    printf("Words sorted by length:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character from fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Original: %s\n\n", sentence);
    
    sortWordsByLength(sentence);

    return 0;
}