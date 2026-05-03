#include <stdio.h>

/* OBJECTIVE: Prove that, inside a function, the array[] parameter is not a real array, but a pointer.
   The sizeof operator inside the function will return the pointer size, not the content's size. */

void test_size(int arr[]) {
    // Here sizeof(arr) returns the size of the POINTER (4 or 8 bytes)
    printf("Parameter size (pointer): %zu bytes\n", sizeof(arr));
}

int main() {
    int numbers[10] = {0};

    // Here sizeof(numbers) returns the actual size (10 * 4 = 40 bytes)
    printf("Actual array size: %zu bytes\n", sizeof(numbers));

    test_size(numbers);
    return 0;
}