#include <stdio.h>

void countCharacterFrequency(char str[]) {
    // Initialize an array of size 256 with all elements set to 0
    int frequency[256] = {0};

    // Count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        // Cast the character to an unsigned char to get its exact ASCII index
        int asciiValue = (unsigned char)str[i];
        frequency[asciiValue]++;
    }

    // Print the results
    printf("\nCharacter Frequencies:\n");
    printf("---------------------\n");
    for (int i = 0; i < 256; i++) {
        // Only print characters that appeared at least once
        // Also skip newline '\n' and carriage return '\r' for cleaner output
        if (frequency[i] > 0 && i != '\n' && i != '\r') {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char myString[200];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Call the frequency counter function
    countCharacterFrequency(myString);

    return 0;
}