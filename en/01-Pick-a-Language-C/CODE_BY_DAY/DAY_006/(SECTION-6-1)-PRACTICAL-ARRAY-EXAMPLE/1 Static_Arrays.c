#include <stdio.h>

/**
 * Goal: Demonstrate declaration, initialization, and iteration
 * over a fixed block of memory.
 */

int main() {
    // 1. Direct Declaration and Initialization (more professional than one by one)
    float grades[4] = {7.5, 8.0, 9.2, 10.0};
    float sum = 0.0;
    int i;

    printf("--- Semester Grades ---\n");

    // 2. Traversing the array with a 'for' loop
    for (i = 0; i < 4; i++) {
        printf("Grade [%d]: %.1f\n", i, grades[i]);
        sum += grades[i]; // Adding up to calculate the average
    }

    // 3. Calculating and displaying the average
    printf("\nFinal Average: %.2f\n", sum / 4);

    return 0;
}