#include <stdio.h>

/* OBJECTIVE: Implement a custom string-to-integer conversion function.
   Apply the character trick cumulatively by multiplying by 10 (decimal base)
   and immediately reject any non-digit characters. */

int extract_integer(const char *text, int *success_flag) {
    int accumulator = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        // Safety validation: if the character is not a digit between '0' and '9', abort
        if (text[i] < '0' || text[i] > '9') {
            *success_flag = 0; // Signals failure
            return 0;
        }

        // The magic of base 10: shift the previous number left and add the new digit
        accumulator = (accumulator * 10) + (text[i] - '0');
    }

    *success_flag = 1; // Signals success
    return accumulator;
}

int main() {
    char valid_input[] = "4810";
    char dirty_input[]   = "48x10"; // Contains an intruder
    int success_flag;

    // Test 1: Clean input
    int value1 = extract_integer(valid_input, &success_flag);
    if (success_flag) {
        printf("[SUCCESS] \"%s\" converted to int: %d\n", valid_input, value1);
    }

    // Test 2: Invalid input
    int value2 = extract_integer(dirty_input, &success_flag);
    if (!success_flag) {
        printf("[ERROR] \"%s\" contains non-numeric characters! Conversion aborted.\n", dirty_input);
    }

    return 0;
}