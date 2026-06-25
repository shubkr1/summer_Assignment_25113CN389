#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int count) {
    char temp[50];

    // Bubble Sort algorithm to sort strings alphabetically
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            // strcmp returns a value > 0 if names[j] is alphabetically greater than names[j+1]
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j+1]
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    // A 2D character array holding 5 names, each up to 50 characters long
    char names[5][50] = {
        "Zara",
        "John",
        "Alex",
        "Mary",
        "David"
    };
    int count = 5;

    printf("Original list of names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }

    // Sort the array of names
    sortNames(names, count);

    printf("\nAlphabetically sorted names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}