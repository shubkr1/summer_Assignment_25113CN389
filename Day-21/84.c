#include <stdio.h>

void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to shift it to its uppercase ASCII value
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char myString[100];

    printf("Enter a string in lowercase: ");
    fgets(myString, sizeof(myString), stdin);

    printf("Original string: %s", myString);

    // Convert the string in-place
    convertToUppercase(myString);

    printf("Uppercase string: %s", myString);

    return 0;
}