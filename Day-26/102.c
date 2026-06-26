#include <stdio.h>

int main() {
    int age;

    printf("==========================================\n");
    printf("       VOTING ELIGIBILITY SYSTEM          \n");
    printf("==========================================\n");

    printf("Please enter your age: ");
    
    // Step 1: Validate that the input is actually a valid number
    if (scanf("%d", &age) != 1) {
        printf("\n❌ Error: Invalid input! Age must be a number.\n");
        return 1; // Exit the program with an error code
    }

    // Step 2: Validate that the age is a realistic positive number
    if (age < 0 || age > 120) {
        printf("\n❌ Error: Please enter a realistic age between 0 and 120.\n");
    } 
    // Step 3: Check eligibility
    else if (age >= 18) {
        printf("\n✅ Congratulations! You are %d years old.\n", age);
        printf("You are ELIGIBLE to cast your vote.\n");
    } 
    else {
        printf("\n🛑 Sorry, you are only %d years old.\n", age);
        printf("You are NOT eligible to vote yet.\n");
        printf("You must wait %d more year(s) to become eligible.\n", 18 - age);
    }

    printf("==========================================\n");
    return 0;
}