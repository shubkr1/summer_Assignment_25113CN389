#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void findCommonCharacters(char str1[], char str2[]) {
    // Boolean arrays to track character presence (0 to 255 ASCII)
    bool presentInStr1[256] = {false};
    bool alreadyPrinted[256] = {false};
    
    // Step 1: Mark characters that exist in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        presentInStr1[(unsigned char)str1[i]] = true;
    }

    printf("Common characters: ");
    bool foundCommon = false;

    // Step 2: Traverse the second string and check against our map
    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = str2[i];

        // If it's a space or newline, let's skip it for cleaner output
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            continue;
        }

        // If character is in str1 AND we haven't printed it yet
        if (presentInStr1[ch] && !alreadyPrinted[ch]) {
            printf("'%c' ", ch);
            alreadyPrinted[ch] = true; // Mark as printed to prevent duplicates
            foundCommon = true;
        }
    }

    if (!foundCommon) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Clean up trailing newlines from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Find and display common characters
    findCommonCharacters(str1, str2);

    return 0;
}