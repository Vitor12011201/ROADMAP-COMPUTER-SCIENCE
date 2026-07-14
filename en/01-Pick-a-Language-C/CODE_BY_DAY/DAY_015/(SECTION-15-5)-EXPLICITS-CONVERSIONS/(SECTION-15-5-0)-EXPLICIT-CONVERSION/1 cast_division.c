#include <stdio.h>

/* OBJECTIVE: Demonstrate the use of explicit cast to force a floating-point
   division between two plain integers. */

int main() {
    int grade_sum = 15;
    int total_tests = 4;

    // Without cast, 15 / 4 results in 3 (C chops off the fractional part without mercy)
    double truncated_average = grade_sum / total_tests;

    // With explicit cast, we force 'grade_sum' to become double (15.0) temporarily.
    // C is forced to perform a double / int division, promoting the result to 3.75.
    double correct_average = (double)grade_sum / total_tests;

    printf("--- Integer Division with Cast ---\n");
    printf("Average without cast (truncated): %.2f\n", truncated_average);
    printf("Average with cast (correct):  %.2f\n", correct_average);

    return 0;
}