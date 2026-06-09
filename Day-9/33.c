#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop starts at total rows and counts down to 1
    for (int i = rows; i >= 1; i--) {
        
        // Inner loop prints 'i' stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}