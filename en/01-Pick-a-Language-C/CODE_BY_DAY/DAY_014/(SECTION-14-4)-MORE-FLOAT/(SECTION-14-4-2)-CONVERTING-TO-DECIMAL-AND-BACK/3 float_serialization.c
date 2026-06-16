#include <stdio.h>
#include <float.h>
#include <stdlib.h>

/* OBJECTIVE: Simulate writing a high-precision geographic coordinate
   in text format (string) and reading it back. Show that using FLT_DIG
   corrupts the original bits, while FLT_DECIMAL_DIG preserves the identical state. */

int main() {
    float original_position = 0.123456789f;
    char wrong_buffer[32];
    char correct_buffer[32];

    // ERROR SCENARIO: Saving using only FLT_DIG (6 places)
    snprintf(wrong_buffer, sizeof(wrong_buffer), "%.*f", FLT_DIG, original_position);

    // CORRECT SCENARIO: Saving using FLT_DECIMAL_DIG (9 places for float)
    snprintf(correct_buffer, sizeof(correct_buffer), "%.*f", FLT_DECIMAL_DIG, original_position);

    // Restoring the values from the converted text
    float recovered_wrong = strtof(wrong_buffer, NULL);
    float recovered_correct = strtof(correct_buffer, NULL);

    printf("Original position in RAM:   %.9f\n\n", original_position);
    
    printf("Text saved with FLT_DIG:         %s\n", wrong_buffer);
    printf("Recovered with bit loss:   %.9f (The last digits changed!)\n\n", recovered_wrong);

    printf("Text saved with DECIMAL_DIG:     %s\n", correct_buffer);
    printf("Recovered IDENTICALLY:   %.9f (Bits 100%% preserved!)\n", recovered_correct);

    return 0;
}