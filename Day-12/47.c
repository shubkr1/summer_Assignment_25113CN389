#include <stdio.h>

// Function declaration (prototype)
// This function doesn't return a value, it prints directly
void printFibonacci(int terms);

int main() {
    int numTerms;

    // Ask the user for input
    printf("Enter the number of terms to print: ");
    scanf("%d", &numTerms);

    // Call the function to handle the sequence generation
    printFibonacci(numTerms);

    return 0;
}

// Function definition
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1;
    int nextTerm;

    // Handle invalid edge cases
    if (terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return; // Exit the function early
    }

    printf("Fibonacci Sequence: ");

    // Loop to calculate and print each term
    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1); // Print the current term
        
        // Calculate the next term in the sequence
        nextTerm = t1 + t2; 
        
        // Update variables to shift forward by one position
        t1 = t2;       // The old t2 becomes the new t1
        t2 = nextTerm; // The calculated nextTerm becomes the new t2
    }
    printf("\n");
}