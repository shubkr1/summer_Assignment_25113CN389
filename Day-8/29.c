#include <stdio.h>

int main() {
    int rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for the rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop for the stars in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        // Move to the next line after printing all stars in a row
        printf("\n");
    }

    return 0;
}