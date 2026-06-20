#include <stdio.h>

#define ROWS 3
#define COLS 3

void findColumnSum(int matrix[ROWS][COLS], int rows, int cols) {
    printf("Column-wise sums:\n");
    
    // Outer loop iterates through each column
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        
        // Inner loop iterates through each row of the current column
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        
        printf("Sum of Column %d = %d\n", j + 1, sum);
    }
}

int main() {
    // Initialize a 3x3 matrix
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Call the function to calculate and print column sums
    findColumnSum(matrix, ROWS, COLS);

    return 0;
}