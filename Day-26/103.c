#include <stdio.h>
#include <stdbool.h>

void displayMenu() {
    printf("\n---------- ATM MENU ----------\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit Simulation\n");
    printf("------------------------------\n");
}

int main() {
    // Initializing a default starting balance
    double balance = 5000.00; 
    int choice;
    double amount;
    bool running = true;

    printf("==========================================\n");
    printf("       WELCOME TO THE ATM SIMULATION      \n");
    printf("==========================================\n");

    while (running) {
        displayMenu();
        printf("Please enter your choice (1-4): ");
        
        // Input validation for menu selection
        if (scanf("%d", &choice) != 1) {
            printf("\n❌ Invalid choice! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1: // Check Balance
                printf("\n💰 Your current available balance is: $%.2f\n", balance);
                break;

            case 2: // Deposit
                printf("\nEnter the amount to deposit: $");
                if (scanf("%lf", &amount) != 1 || amount <= 0) {
                    printf("❌ Invalid amount! Deposit must be a positive number.\n");
                } else {
                    balance += amount; // Add money to balance
                    printf("✅ Success! $%.2f deposited.\n", amount);
                    printf("New Balance: $%.2f\n", balance);
                }
                while (getchar() != '\n'); // Clear input buffer
                break;

            case 3: // Withdraw
                printf("\nEnter the amount to withdraw: $");
                if (scanf("%lf", &amount) != 1 || amount <= 0) {
                    printf("❌ Invalid amount! Withdrawal must be a positive number.\n");
                } 
                // Overdraft protection logic
                else if (amount > balance) {
                    printf("❌ Transaction Denied: Insufficient balance!\n");
                    printf("Your current balance is only $%.2f\n", balance);
                } 
                else {
                    balance -= amount; // Subtract money from balance
                    printf("✅ Success! $%.2f withdrawn.\n", amount);
                    printf("Remaining Balance: $%.2f\n", balance);
                }
                while (getchar() != '\n'); // Clear input buffer
                break;

            case 4: // Exit
                printf("\nThank you for using our ATM simulation. Goodbye!\n");
                running = false;
                break;

            default:
                printf("\n❌ Invalid choice! Please choose an option between 1 and 4.\n");
        }
    }

    printf("==========================================\n");
    return 0;
}