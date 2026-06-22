#include <stdio.h>
#include <ctype.h> // Required for isspace()

int countWords(char str[]) {
    int wordCount = 0;
    int inWord = 0; // Acts as a boolean flag (0 = false, 1 = true)

    for (int i = 0; str[i] != '\0'; i++) {
        // isspace() checks for spaces ' ', tabs '\t', and newlines '\n'
        if (isspace(str[i])) {
            inWord = 0; // We hit a space, so we are no longer inside a word
        } 
        // If the character is not a space and we weren't already inside a word
        else if (inWord == 0) {
            inWord = 1;   // Mark that we have entered a new word
            wordCount++;  // Increment the word counter
        }
    }

    return wordCount;
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Calculate the number of words
    int totalWords = countWords(sentence);

    // Display the result
    printf("Total number of words: %d\n", totalWords);

    return 0;
}