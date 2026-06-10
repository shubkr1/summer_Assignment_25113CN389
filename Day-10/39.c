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
        
        // 2. Inner loop to print incrementing numbers from 1 to i
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        
        // 3. Inner loop to print decrementing numbers from i-1 down to 1
        for (int m = i - 1; m >= 1; m--) {
            printf("%d", m);
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}