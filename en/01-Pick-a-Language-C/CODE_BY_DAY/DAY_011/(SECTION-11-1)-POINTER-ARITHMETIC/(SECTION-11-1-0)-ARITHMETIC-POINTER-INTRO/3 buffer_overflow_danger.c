#include <stdio.h>

/* OBJECTIVE: Illustrate the danger of moving a pointer beyond the allowed limit.
   Accessing invalid memory can result in garbage data or the famous Segmentation Fault. */

int main() {
    int values[2] = {100, 200};
    int *ptr = values;

    printf("Value 0: %d\n", *ptr);
    ptr++; // Now points to the value 200
    printf("Value 1: %d\n", *ptr);

    ptr++; // DANGER: Now points to memory that does not belong to the array!

    // Attempting to read here is Undefined Behavior
    printf("Invalid value: %d (Memory garbage or Crash)\n", *ptr);

    return 0;
}