#include <stdio.h>

char findMaxOccurringChar(char str[]) {
    // Initialize frequency array for all 256 ASCII characters to 0
    int frequency[256] = {0};
    int maxCount = 0;
    char maxChar = '\0';

    // Step 1: Count frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Skip space and newline characters so they don't count as the max character
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            frequency[(unsigned char)str[i]]++;
        }
    }

    // Step 2: Find the character with the maximum frequency
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char myString[200];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    char result = findMaxOccurringChar(myString);

    // Display the result
    if (result != '\0') {
        printf("The maximum occurring character is: '%c'\n", result);
    } else {
        printf("The string is empty or contains only spaces.\n");
    }

    return 0;
}