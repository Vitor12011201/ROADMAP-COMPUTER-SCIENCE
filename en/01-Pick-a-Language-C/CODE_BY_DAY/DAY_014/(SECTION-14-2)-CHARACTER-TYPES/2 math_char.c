#include <stdio.h>

/* OBJECTIVE: Perform arithmetic operations directly on 'char' variables.
   This is useful for manipulating text, such as converting uppercase letters to lowercase. */

int main() {
    char uppercase = 'G';
    
    // In the ASCII table, the distance between an uppercase and lowercase letter is always 32
    char lowercase = uppercase + 32; 

    printf("Uppercase: %c (Code: %d)\n", uppercase, uppercase);
    printf("Lowercase: %c (Code: %d)\n", lowercase, lowercase);

    // Moving on to simple cryptography (Caesar cipher: shift 3 letters)
    char original_letter = 'A';
    char encrypted_letter = original_letter + 3;
    printf("Caesar cipher ('A' + 3): %c\n", encrypted_letter);

    return 0;
}