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
        
        // 2. Inner loop to print incrementing characters from 'A' up to the row target
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c", ch);
            ch++;
        }
        
        // Backtrack the character variable by 2 to get to the correct starting point 
        // for the decrementing sequence (e.g., if ch became 'D', we want to start printing from 'B')
        ch -= 2; 
        
        // 3. Inner loop to print decrementing characters down to 'A'
        for (int m = 1; m < i; m++) {
            printf("%c", ch);
            ch--;
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}