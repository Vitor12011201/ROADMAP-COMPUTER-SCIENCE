#include <stdio.h>

int main() {
    // C will count 4 items and create an array of size 4
    int ages[] = {18, 21, 30, 45};

    // To determine the size, we use the sizeof trick
    int total_elements = sizeof(ages) / sizeof(ages[0]);

    printf("\nAutomatic Sizing:\n");
    printf("C created an array with %d positions.\n", total_elements);

    return 0;
}