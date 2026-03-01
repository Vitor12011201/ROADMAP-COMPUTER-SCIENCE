/* In main, declare a double real = 10.5; (Tip: double usually occupies 8 bytes).
Declare a pointer double *ptr = &real;.
Try to guess (and then use printf with %zu to confirm):
What is the sizeof(real)?
What is the sizeof(ptr)?
What is the sizeof(*ptr)?*/

#include <stdio.h>

int main() {
    double real = 10.5;
    double *ptr = &real;

    printf("The size of %.2f is equal to %zu Bytes\n", real, sizeof(real)); // This will be 8 Bytes because it returns the space allocated for a double
    printf("The size of ptr is equal to %zu Bytes\n", sizeof(ptr)); // This will also return 8 Bytes, but it returns the size of the memory address (pointer)
    printf("The size of *ptr is equal to %zu Bytes\n", sizeof(*ptr)); // This will return 8 Bytes because it returns the size of the value the pointer points to (a double)


    char letter = 'A';
    char *ptr_2 = &letter;

    printf("\nThe size of the variable letter is equal to (%zu Byte)\n", sizeof(letter));
    printf("The size of the pointer address for the variable letter is equal to (%zu Bytes)\n", sizeof(ptr_2));
    printf("The size of what is inside the pointer *ptr_2 is equal to (%zu Byte)\n", sizeof(*ptr_2));

    return 0;
}