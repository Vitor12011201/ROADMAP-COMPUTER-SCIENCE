#include <stdio.h>
#include <stdlib.h> // Contains atoi and atof

/* OBJECTIVE: Demonstrate the simple use of the 'atoi' family and highlight the risk
   of undefined behavior when the string is not a valid number. */

int main() {
    char *pi_text = "3.14159";
    char *garbage_text = "Ronaldo123";

    // Direct conversion from string to float/double
    float converted_pi = atof(pi_text);
    printf("Success with atof: %f\n", converted_pi);

    // THE DANGER: "Ronaldo123" does not start with a number.
    // atoi() may return 0, may crash, or may pick up garbage from memory.
    int unpredictable_result = atoi(garbage_text);
    printf("Result with invalid string: %d (Never trust this zero!)\n", unpredictable_result);

    return 0;
}