#include <stdio.h>

void removeDuplicates(char str[]) {
    // Initialize a frequency array for all 256 ASCII characters to 0
    // 0 means 'not seen yet', 1 means 'already seen'
    int seen[256] = {0};
    
    int writeIndex = 0; // Tracks where to write the unique character

    // Loop through the entire string
    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        unsigned char ch = str[readIndex];

        // If this character has not been seen before
        if (seen[ch] == 0) {
            seen[ch] = 1; // Mark it as seen
            
            // Retain the character by moving it to the write index
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }

    // Null-terminate the modified string to clear out any remaining garbage
    str[writeIndex] = '\0';
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

    printf("Original string: %s\n", myString);

    // Remove duplicates
    removeDuplicates(myString);

    printf("String after removing duplicates: %s\n", myString);

    return 0;
}