#include <stdio.h>

#define SIZE 3 // The matrix must be square (e.g., 3x3)

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int primarySum = 0;
    int secondarySum = 0;

    // Single loop to calculate both diagonal sums
    for (int i = 0; i < SIZE; i++) {
        primarySum += matrix[i][i];                  // Elements: [0][0], [1][1], [2][2]
        secondarySum += matrix[i][SIZE - 1 - i];    // Elements: [0][2], [1][1], [2][0]
    }

    // Print the matrix for visualization
    printf("Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);
    printf("Total Sum of Diagonals: %d\n", primarySum + secondarySum);

    return 0;
}