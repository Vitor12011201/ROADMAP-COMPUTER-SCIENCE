#include <stdio.h>

/* OBJECTIVE: Demonstrate the implicit assignment back and forth from a
   specific pointer to a void* pointer, and the need to retrieve the type to read the data. */

int main() {
    int secret_number = 42;

    // &secret_number is of type 'int*'. C accepts storing it in a 'void*' without complaint.
    void *generic_pointer = &secret_number;

    // The reverse is also true: the void* flows to an 'int*' implicitly.
    int *int_pointer = generic_pointer;

    printf("--- Basic void* Conversion ---\n");
    // printf("%d", *generic_pointer); // COMPILATION ERROR! The compiler does not know the size of 'void'.

    printf("Value recovered via int_pointer: %d\n", *int_pointer);

    return 0;
}