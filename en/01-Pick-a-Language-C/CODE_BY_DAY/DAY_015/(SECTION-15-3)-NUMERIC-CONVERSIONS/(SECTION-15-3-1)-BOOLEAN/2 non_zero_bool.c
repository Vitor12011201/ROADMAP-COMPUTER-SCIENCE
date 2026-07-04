#include <stdio.h>
#include <stdbool.h>

/* OBJECTIVE: Prove that any non-zero value (negatives, tiny floats)
   is strictly collapsed to the integer value 1 when stored in a bool. */

int main() {
    // Assigning bizarre numbers to boolean variables
    bool negative = -5;
    bool tiny_float = 0.0001f;
    bool zero_float = 0.0;

    printf("--- Boolean Coercion Behavior ---\n");
    
    // -5 is not zero, so it becomes strictly 1!
    printf("The number -5 became:      %d (true)\n", negative);
    
    // 0.0001 is not zero, so it becomes strictly 1!
    printf("The float 0.0001f became:  %d (true)\n", tiny_float);
    
    // 0.0 is the absolute zero of floating point, so it becomes 0!
    printf("The float 0.0 became:      %d (false)\n", zero_float);

    return 0;
}