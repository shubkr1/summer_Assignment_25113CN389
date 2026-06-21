#include <stdio.h>

int findStringLength(char str[]) {
    int length = 0;
    
    // Loop until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char myString[100];

    // Take string input from the user
    printf("Enter a string: ");
    // Using fgets to safely handle strings with spaces
    fgets(myString, sizeof(myString), stdin);

    // fgets includes the newline character '\n' if there is room.
    // This quick fix removes it so it doesn't count toward the length.
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    // Calculate length
    int len = findStringLength(myString);

    // Display the result
    printf("The length of the string is: %d\n", len);

    return 0;
}