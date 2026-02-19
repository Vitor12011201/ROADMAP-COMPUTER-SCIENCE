#include <stdio.h>

// Password Comparator

int main() {
    int entered_password = 1234;
    int correct_password = 2026;

    printf("--- SECURITY SYSTEM ---\n");

    if (entered_password == correct_password) {
        // If the comparison is TRUE (1), execute this:
        printf("ACCESS GRANTED!\n");
        printf("Welcome to the system, boss.\n");
    }
    else {
        // If the comparison is FALSE (0), execute this:
        printf("ACCESS DENIED!\n");
        printf("Alert: Incorrect password detected.\n");
    }

    printf("--- END OF OPERATION ---\n");

    return 0;
}