#include <stdio.h>

char findFirstNonRepeating(char str[]) {
    // Step 1: Initialize frequency array for all 256 ASCII characters to 0
    int frequency[256] = {0};

    // First pass: Count frequencies of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Second pass: Find the first character with a count of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i]; // Return the first non-repeating character found
        }
    }

    // Return a null character if every character repeats
    return '\0'; 
}

int main() {
    char myString[200];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove trailing newline character added by fgets if present
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    char result = findFirstNonRepeating(myString);

    // Display the result
    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("All characters repeat or the string is empty.\n");
    }

    return 0;
}