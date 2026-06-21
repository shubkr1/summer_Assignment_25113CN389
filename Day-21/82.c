#include <stdio.h>

void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    char temp;

    // 1. Find the length of the string (to locate the end pointer)
    while (str[end] != '\0') {
        end++;
    }
    end--; // Move back by 1 to point to the last actual character, not '\0'

    // 2. Swap characters from both ends moving inward
    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers
        start++;
        end--;
    }
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    // Safely read string with spaces
    fgets(myString, sizeof(myString), stdin);

    // Remove the trailing newline character added by fgets
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    printf("Original string: %s\n", myString);

    // Reverse the string in-place
    reverseString(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}