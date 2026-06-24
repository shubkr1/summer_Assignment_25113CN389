#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int n = strlen(str);
    int j = 0; // Index for the compressed string

    for (int i = 0; i < n; i++) {
        // Count occurrences of the current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Append the character to the compressed buffer
        compressed[j++] = str[i];

        // Convert the count to characters and append to the buffer
        // sprintf returns the number of characters written, advancing j correctly
        j += sprintf(&compressed[j], "%d", count);
    }

    // Null-terminate the compressed string
    compressed[j] = '\0';
}

int main() {
    char myString[100];
    char compressedString[200]; // Allocation size handles worst-case expansions (e.g., "abcdef" -> "a1b1c1d1e1f1")

    printf("Enter a string to compress: ");
    fgets(myString, sizeof(myString), stdin);

    // Clean up trailing newline from fgets
    myString[strcspn(myString, "\n")] = '\0';

    // Compress the string
    compressString(myString, compressedString);

    // According to standard design rules, if the compressed string isn't smaller,
    // you generally default back to the original string.
    printf("\nOriginal string: %s\n", myString);
    if (strlen(compressedString) < strlen(myString)) {
        printf("Compressed string: %s\n", compressedString);
    } else {
        printf("Compression not beneficial. Returning original: %s\n", myString);
    }

    return 0;
}