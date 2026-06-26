#include <stdio.h>

/* OBJECTIVE: Demonstrate automatic implicit conversion (promotion).
   When a smaller type is operated together with a larger type, C promotes
   the smaller one to the size of the larger one without losing any information. */

int main() {
    int x = 10;
    float y = 4.5f;

    // 'x' (int) is implicitly promoted to float before the addition
    float result = x + y; // 10.0f + 4.5f

    printf("Result of automatic promotion: %f\n", result);
    printf("Size of the operation on the Stack: %zu bytes\n", sizeof(x + y));

    return 0;
}