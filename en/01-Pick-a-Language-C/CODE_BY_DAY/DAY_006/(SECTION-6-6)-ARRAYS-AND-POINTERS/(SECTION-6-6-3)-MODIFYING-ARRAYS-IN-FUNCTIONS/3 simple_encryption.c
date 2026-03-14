#include <stdio.h>

// 'name' points to the first character of the original string
void anonymize(char *name) {
    // Directly modifies the first characters of the original string
    name[0] = 'X';
    name[1] = 'X';
    // The rest of the string remains the same
}

int main() {
    // We define a string as a mutable character array
    char user[] = "Romario";

    printf("Original user: %s\n", user);

    // The function goes into 'user' memory and replaces the first two letters with 'XX'
    anonymize(user);

    // The result is visible here in main()
    printf("Anonymous user: %s\n", user);

    return 0;
}