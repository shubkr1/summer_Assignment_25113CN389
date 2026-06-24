#include <stdio.h>
#include <ctype.h>
#include <string.h>

void findLongestWord(char src[], char result[]) {
    int maxLen = 0;
    int maxStartIdx = 0;
    
    int currentLen = 0;
    int currentStartIdx = 0;
    
    int i = 0;
    int n = strlen(src);

    for (i = 0; i <= n; i++) {
        // A word ends if we hit a space, punctuation, or the null terminator
        if (isspace(src[i]) || ispunct(src[i]) || src[i] == '\0') {
            
            // Check if the word we just finished is the longest so far
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIdx = currentStartIdx;
            }
            
            // Reset the length tracker for the next word
            currentLen = 0;
        } 
        else {
            // If current length is 0, this character marks the start of a new word
            if (currentLen == 0) {
                currentStartIdx = i;
            }
            currentLen++;
        }
    }

    // Copy the longest word from the source string into the result buffer
    strncpy(result, &src[maxStartIdx], maxLen);
    result[maxLen] = '\0'; // Explicitly null-terminate the string
}

int main() {
    char sentence[200];
    char longestWord[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Find the longest word
    findLongestWord(sentence, longestWord);

    // Display the result
    if (strlen(longestWord) > 0) {
        printf("The longest word is: \"%s\" (Length: %lu)\n", longestWord, strlen(longestWord));
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}