#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void addMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }
}

int main() {
    // Initialize Matrix A
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Initialize Matrix B
    int B[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Matrix to store the result
    int C[ROWS][COLS];

    // Perform addition
    addMatrices(A, B, C);

    // Display results
    printf("Matrix A:\n");
    printMatrix(A);

    printf("\nMatrix B:\n");
    printMatrix(B);

    printf("\nResultant Matrix (A + B):\n");
    printMatrix(C);

    return 0;
}