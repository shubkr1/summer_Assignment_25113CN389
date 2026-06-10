#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // 1. Inner loop to print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // 2. Inner loop to print stars (2*i - 1 stars per row)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}