#include <stdio.h>

#define ROWS 2
#define COLS 3

// Function to transpose a matrix
void transposeMatrix(int A[ROWS][COLS], int transpose[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = A[i][j];
        }
    }
}

// Function to print a matrix with variable dimensions
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Original 2x3 Matrix
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Transposed Matrix must be 3x2
    int transpose[COLS][ROWS];

    // Perform transpose operation
    transposeMatrix(A, transpose);

    // Display results
    printf("Original Matrix (2x3):\n");
    printMatrix(ROWS, COLS, A);

    printf("\nTransposed Matrix (3x2):\n");
    printMatrix(COLS, ROWS, transpose);

    return 0;
}