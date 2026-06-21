#include <stdio.h>
#include <ctype.h> // Required for tolower() and isalpha()

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is an alphabet letter (ignores spaces, numbers, punctuation)
        if (isalpha(ch)) {
            // Convert to lowercase to minimize comparison checks
            ch = tolower(ch);

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                // If it's an alphabet and not a vowel, it must be a consonant
                (*consonants)++;
            }
        }
    }
}

int main() {
    char myString[100];
    int vowelCount = 0;
    int consonantCount = 0;

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // Count vowels and consonants
    countVowelsAndConsonants(myString, &vowelCount, &consonantCount);

    // Display the results
    printf("\n--- Results ---\n");
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);

    return 0;
}