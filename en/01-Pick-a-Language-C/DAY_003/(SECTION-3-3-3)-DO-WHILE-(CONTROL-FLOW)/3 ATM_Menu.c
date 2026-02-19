#include <stdio.h>

int main() {
    int option;

    do {
        // The block of code that WILL be executed at least once
        printf("\n--- C-FLORENCE BANK ---\n");
        printf("1. View Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit\n");
        printf("0. Exit\n");
        printf("Choose an option: ");

        scanf("%d", &option); // Reads the user's choice

        // Logic for each option
        if (option == 1) {
            printf(">> Your balance is $ 1,000.00\n");
        } else if (option == 2) {
            printf(">> Money withdrawn successfully!\n");
        } else if (option == 3) {
            printf(">> Deposit completed!\n");
        } else if (option != 0) {
            printf(">> Invalid option, please try again.\n");
        }

    } while (option != 0); // Only stops the loop when the user types 0

    printf("Thank you for using our bank. See you soon!\n");

    return 0;
}