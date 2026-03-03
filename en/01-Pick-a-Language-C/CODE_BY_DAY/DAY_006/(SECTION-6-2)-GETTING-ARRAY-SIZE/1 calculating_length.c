#include <stdio.h>

/**
 * Example: Calculating Array Size (The sizeof Trick)
 * Goal: Show how to find the number of elements and why
 * arrays "decay" to pointers inside functions.
 */

void failed_attempt(int arr[]) {
    // Here arr is no longer the entire block, it's just a pointer to the start!
    // sizeof(arr) will return 8 (pointer size) instead of 20.
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Inside the function: %zu elements (WRONG!)\n", size);
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; // 5 elements

    // In the scope where it was created, C knows the total size (5 * 4 bytes = 20)
    size_t total_bytes = sizeof(numbers);
    size_t one_element = sizeof(numbers[0]);
    size_t length = total_bytes / one_element;

    printf("--- In the main scope ---\n");
    printf("Total bytes: %zu\n", total_bytes);
    printf("Bytes per int: %zu\n", one_element);
    printf("Calculated amount: %zu elements (CORRECT!)\n\n", length);

    printf("--- Function Test ---\n");
    failed_attempt(numbers);

    return 0;
}