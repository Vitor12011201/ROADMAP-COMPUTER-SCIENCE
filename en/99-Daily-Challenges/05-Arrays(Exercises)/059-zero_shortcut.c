#include <stdio.h>

/* 1. Declare an integer array named data[] (let C calculate the size) and initialize it with the values {10, 20, 30}.
   2. Declare a second array named empty[10] and initialize it using the shortcut so that all elements are zero.
   3. Print the size of the first array (using the sizeof trick learned in the previous section) and print the last element of the second array to confirm it is zero. */

int main() {
    int data[] = {10, 20, 30};
    int empty[10] = {0};

    int size = sizeof(data) / sizeof(int);

    printf("The size of the Data Array is [%d] Integers\n", size);
    printf("All positions in the empty Array are zeroed. The value at empty[9] is [%d]\n", empty[9]);

    return 0;
}