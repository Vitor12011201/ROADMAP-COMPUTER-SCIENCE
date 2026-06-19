#include <stdio.h>

/* OBJECTIVE: Illustrate the classic error of aligning decimal numbers using
   leading zeros. Show how C silently transforms the value into Octal (base 8),
   generating bizarre results and hard-to-find bugs. */

int main() {
    // The programmer wanted to create a nice aligned list on screen:
    int user_id_1 = 11111; // Decimal 11111
    int user_id_2 = 00111; // C interprets as OCTAL due to the leading zero!

    printf("--- The Danger of Alignment with Zeros ---\n");
    printf("ID 1 (expected 11111): %d\n", user_id_1);
    
    // Octal 111 equals (1 * 8^2) + (1 * 8^1) + (1 * 8^0) = 64 + 8 + 1 = 73
    printf("ID 2 (expected 00111): %d (Became 73 in decimal!)\n", user_id_2);

    // EXTRA CAUTION: Octal numbers only go from 0 to 7.
    // Uncommenting the line below generates an immediate COMPILATION ERROR:
    // int octal_error = 018; // Error: invalid digit '8' in octal constant

    return 0;
}