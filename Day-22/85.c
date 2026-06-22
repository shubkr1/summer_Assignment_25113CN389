#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int start = 0;
    int end = 0;

    // Find the length of the string manually to locate the end pointer
    while (str[end] != '\0') {
        end++;
    }
    end--; // Move back to point to the last actual character (ignore '\0')

    // Compare characters from both ends moving inward
    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Characters don't match, not a palindrome
        }
        start++;
        end--;
    }
    
    return true; // All characters matched
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove trailing newline character added by fgets
    for (int i = 0; myString[i] != '\0'; i++) {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    // Check and print result
    if (isPalindrome(myString)) {
        printf("\"%s\" is a palindrome.\n", myString);
    } else {
        printf("\"%s\" is not a palindrome.\n", myString);
    }

    return 0;
}