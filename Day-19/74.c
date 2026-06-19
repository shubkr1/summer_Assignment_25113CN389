#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to subtract matrix B from matrix A
void subtractMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); 
    }
}

int main() {
    // Initialize Matrix A
    int A[ROWS][COLS] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // Initialize Matrix B
    int B[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Matrix to store the result (A - B)
    int C[ROWS][COLS];

    // Perform subtraction
    subtractMatrices(A, B, C);

    // Display results
    printf("Matrix A:\n");
    printMatrix(A);

    printf("\nMatrix B:\n");
    printMatrix(B);

    printf("\nResultant Matrix (A - B):\n");
    printMatrix(C);

    return 0;
}