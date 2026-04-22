#include <stdio.h>

/* OBJECTIVE: Create an alias for floating-point types.
   If the project requires more precision in the future (switching from float to double),
   you only need to change the typedef line once. */

typedef float grade_t;
// typedef double grade_t; // <- You would just uncomment here in the future

int main() {
    grade_t exam1 = 8.5;
    grade_t exam2 = 7.0;
    grade_t average = (exam1 + exam2) / 2;

    printf("The final average is: %.1f\n", average);
    return 0;
}