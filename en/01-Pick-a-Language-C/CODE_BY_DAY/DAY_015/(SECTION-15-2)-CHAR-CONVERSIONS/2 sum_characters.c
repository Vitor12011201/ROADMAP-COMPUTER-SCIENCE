#include <stdio.h>

/* OBJECTIVE: Traverse a string containing a sequence of digits and
   calculate the mathematical sum of its individual digits using Beej's trick. */

int main() {
    // A string representing an activation key or data payload
    char key_str[] = "12345";
    int total_sum = 0;

    // Scanning the string character by character until the null terminator '\0'
    for (int i = 0; key_str[i] != '\0'; i++) {
        // Converts the current character to a number and accumulates
        total_sum += (key_str[i] - '0');
    }

    printf("Analyzed string: \"%s\"\n", key_str);
    printf("Mathematical sum of digits: %d (1+2+3+4+5)\n", total_sum);

    return 0;
}