#include <stdio.h>

int main() {
    int size;

    // Ask the user for the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            
            // Print star only for boundaries:
            // Top row (i==1), Bottom row (i==size), Left col (j==1), Right col (j==size)
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" "); // Print space for hollow inside
            }
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}