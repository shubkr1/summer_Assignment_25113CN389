#include <stdio.h>
#include <stdbool.h>

#define SIZE 3 // Matrix must be square (e.g., 3x3)

// Function to check if the matrix is symmetric
bool isSymmetric(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        // Optimization: j only needs to go up to i, as checking 
        // matrix[i][j] vs matrix[j][i] covers both sides of the diagonal.
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false; // Found a mismatch, not symmetric
            }
        }
    }
    return true; // No mismatches found
}

int main() {
    // Example of a Symmetric Matrix
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    // Print the matrix for visualization
    printf("Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Check symmetry and print result
    if (isSymmetric(matrix)) {
        printf("\nThe matrix is a SYMMETRIC matrix.\n");
    } else {
        printf("\nThe matrix is NOT a symmetric matrix.\n");
    }

    return 0;
}