#include <stdio.h>

/* OBJECTIVE: Understand that typedef syntax follows the same rules as a standard variable declaration.
 * You simply place the 'typedef' keyword at the beginning of the declaration.
 */

int main() {
    // Standard declaration:
    // int x;

    // Declaration with typedef:
    typedef int number; // 'number' now represents the 'int' type

    number my_value = 100;
    printf("Value: %d\n", my_value);

    return 0;
}