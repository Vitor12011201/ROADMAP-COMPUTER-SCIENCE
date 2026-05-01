#include <stdio.h>

/* OBJECTIVE: Find the position (index) of a value within an array
   by subtracting the found pointer from the starting pointer. */

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *start = numbers;
    int *target = &numbers[3]; // Points to 40

    // How many 'ints' exist between the start and the target?
    int distance = target - start;

    printf("The value %d is at index: %d\n", *target, distance);
    return 0;
}