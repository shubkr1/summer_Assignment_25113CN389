#include <stdio.h>

char findFirstRepeating(char str[]) {
    // Initialize a frequency array for all 256 ASCII characters to 0
    int frequency[256] = {0};

    // Single pass: Traverse the string from left to right
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        // If this character has been seen before, it's our first repeating character
        if (frequency[ch] == 1) {
            return ch; 
        }

        // Mark the character as seen
        frequency[ch] = 1;
    }

    // Return a null character if no character repeats
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

    char result = findFirstRepeating(myString);

    // Display the result
    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}