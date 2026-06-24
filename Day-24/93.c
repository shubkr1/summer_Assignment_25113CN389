#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Step 1: If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return false;
    }

    // Step 2: Create a temporary buffer to hold str1 concatenated with itself
    // Size is (len1 * 2) + 1 for the null terminator
    char temp[2 * len1 + 1];
    
    strcpy(temp, str1); // Copy str1 into temp
    strcat(temp, str1); // Concatenate str1 again -> temp now holds str1 + str1

    // Step 3: Check if str2 is a substring of the doubled string
    // strstr() returns a pointer if found, or NULL if not found
    if (strstr(temp, str2) != NULL) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Clean up trailing newlines from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check and display the result
    if (isRotation(str1, str2)) {
        printf("\"%s\" IS a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }

    return 0;
}