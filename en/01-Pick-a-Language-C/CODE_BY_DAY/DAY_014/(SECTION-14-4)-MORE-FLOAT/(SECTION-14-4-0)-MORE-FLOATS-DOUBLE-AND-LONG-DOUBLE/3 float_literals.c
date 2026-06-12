#include <stdio.h>

/* OBJECTIVE: Fix a classic hidden error: in C, any number with a decimal point (e.g., 0.1)
   is considered 'double' by the compiler. If you do not use the 'f' suffix when assigning
   to a float, an implicit conversion occurs that can generate mathematical errors. */

int main() {
    // The computer cannot represent 0.1 perfectly in base-2 binary
    float num1 = 0.1f; // Correct: The 'f' suffix tells the constant to be born as float
    float num2 = 0.1;  // Dangerous: Creates a 64-bit double and truncates to 32-bit float

    // Equality test that often breaks system logic
    if (num1 == 0.1) {
        printf("Equal! (Rare to happen because the default type is double)\n");
    } else {
        printf("[WARNING] num1 (float) IS NOT EXACTLY equal to 0.1 (double) for the hardware!\n");
    }

    // The correct way to work with maximum precision using long double constants (suffix L)
    long double max_pi = 3.14159265358979323846L;
    printf("High precision long double: %.19Lf\n", max_pi);

    return 0;
}