#include <stdio.h>
#include <stdbool.h> // Includes the 'bool', 'true' (1) and 'false' (0) macros

/* OBJECTIVE: Demonstrate the basic implicit conversion of plain integers
   to the Boolean type and how they are printed using %d. */

int main() {
    // In classic C, bool is just an alias for the numeric type _Bool
    bool pure_false = 0;
    bool pure_true = 1;

    printf("--- Pure Boolean Values ---\n");
    printf("Value of pure_false (0):      %d\n", pure_false);
    printf("Value of pure_true (1): %d\n", pure_true);

    return 0;
}