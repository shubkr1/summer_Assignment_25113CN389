#include <stdio.h>

#define ROWS 3
#define COLS 4

void printRowSums(int matrix[ROWS][COLS]) {
    printf("Row-wise Sums:\n");
    
    // Outer loop selects the row
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0; // Reset sum for the current row
        
        // Inner loop iterates through all columns of the current row
        for (int j = 0; j < COLS; j++) {
            rowSum += matrix[i][j];
        }
        
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
}

int main() {
    // Initialize a 3x4 Matrix
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the matrix for visualization
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculate and print row-wise sums
    printRowSums(matrix);

    return 0;
}