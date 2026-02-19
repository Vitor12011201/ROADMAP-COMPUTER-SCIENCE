#include <stdio.h>

int main() {
    int number;

    printf("--- ENTER NUMBERS (Negative to exit) ---\n");

    // We create a purposeful infinite loop with while(1)
    while (1) {
        printf("Enter a value: ");
        scanf("%d", &number); // Reading the number from the keyboard

        // Exit condition:
        if (number < 0) {
            printf("Exiting the loop...\n");
            break; // The computer jumps directly OUT of the while braces
        }

        // This only happens if the break statement is NOT executed
        printf("You entered: %d (the loop continues...)\n", number);
    }

    printf("Phew! We successfully exited the loop.\n");

    return 0;
}