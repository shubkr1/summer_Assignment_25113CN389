#include <stdio.h>

int main() {
    int rows;
    char ch = 'A'; // Start with character 'A'

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print the current character 'ch', 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        
        // Move to the next character for the next row
        ch++;
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}