#include <stdio.h>

void removeSpaces(char str[]) {
    int count = 0; // To keep track of non-space characters

    // Traverse the given string
    for (int i = 0; str[i] != '\0'; i++) {
        // If the current character is not a space, move it forward
        if (str[i] != ' ' && str[i] != '\t') {
            str[count] = str[i];
            count++; // Increment the position for the next non-space character
        }
    }
    
    // Null-terminate the modified string to close it off
    str[count] = '\0';
}

int main() {
    char myString[200];

    printf("Enter a string with spaces: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove trailing newline character added by fgets if present
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    printf("Original string: \"%s\"\n", myString);

    // Remove spaces
    removeSpaces(myString);

    printf("Modified string: \"%s\"\n", myString);

    return 0;
}