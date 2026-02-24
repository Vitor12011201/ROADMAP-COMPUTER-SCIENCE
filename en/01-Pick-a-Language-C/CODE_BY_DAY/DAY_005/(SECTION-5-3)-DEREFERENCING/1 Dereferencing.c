#include <stdio.h>

// This function receives the ADDRESSES (pointers)
void swap(int *p1, int *p2) {
    int temp; // Temporary variable to avoid losing the value

    temp = *p1; // Saves the value located at address p1
    *p1 = *p2;  // Places the value of p2 into the address of p1
    *p2 = temp; // Places the saved value into the address of p2
}

int main(void) {
    int x = 5;
    int y = 10;

    printf("Before: x = %d, y = %d\n", x, y);

    // We pass the ADDRESSES to the function
    swap(&x, &y);

    // The magic happened! The values swapped places in main
    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}