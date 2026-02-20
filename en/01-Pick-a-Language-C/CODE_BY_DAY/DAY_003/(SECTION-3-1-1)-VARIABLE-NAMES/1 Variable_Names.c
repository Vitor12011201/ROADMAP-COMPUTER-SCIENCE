#include <stdio.h>

int main() {
    // --- VALID ---
    int age = 25;
    float _temperature = 36.5;
    int max_score = 1000;
    int value2 = 50;

    // --- INVALID (The compiler will complain) ---
    // int 2value = 10;      // ERROR: Starts with a digit
    // int float = 5;        // ERROR: 'float' is a reserved keyword
    // int total-value = 20; // ERROR: Hyphen is not allowed (C sees it as subtraction)

    // --- AVOID (Reserved for system/compiler) ---
    int __input;            // Avoid: risk of conflict with internal headers
    int _Global;            // Avoid: follows the pattern of C internal names

    return 0;
}