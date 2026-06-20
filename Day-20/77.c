#include <stdio.h>

#define R1 2 // Rows of Matrix A
#define C1 3 // Columns of Matrix A / Rows of Matrix B
#define C2 2 // Columns of Matrix B

// Function to multiply two matrices
void multiplyMatrices(int A[R1][C1], int B[C1][C2], int result[R1][C2]) {
    // Initialize the result matrix with 0
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication using 3 nested loops
    for (int i = 0; i < R1; i++) {         // Loops through rows of A
        for (int j = 0; j < C2; j++) {     // Loops through columns of B
            for (int k = 0; k < C1; k++) { // Loops for dot product calculation
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matrix A (2x3)
    int A[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matrix B (3x2)
    int B[C1][C2] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };

    // Result matrix will be of size (2x2)
    int result[R1][C2];

    multiplyMatrices(A, B, result);

    // Displaying the matrices
    printf("Matrix A (2x3):\n");
    printMatrix(R1, C1, A);

    printf("\nMatrix B (3x2):\n");
    printMatrix(C1, C2, B);

    printf("\nResultant Matrix (2x2):\n");
    printMatrix(R1, C2, result);

    return 0;
}