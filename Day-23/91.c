#include <stdio.h>
#include <stdbool.h>

bool checkAnagram(char str1[], char str2[]) {
    int frequency[256] = {0};
    int i;

    // Increment frequencies for the first string
    for (i = 0; str1[i] != '\0'; i++) {
        frequency[(unsigned char)str1[i]]++;
    }

    // Decrement frequencies for the second string
    for (i = 0; str2[i] != '\0'; i++) {
        frequency[(unsigned char)str2[i]]--;
    }

    // If the strings are anagrams, every single index must have returned to 0
    for (i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            return false; 
        }
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Clean up trailing newlines from fgets
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') { str1[i] = '\0'; break; }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') { str2[i] = '\0'; break; }
    }

    // Check and display the result
    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}