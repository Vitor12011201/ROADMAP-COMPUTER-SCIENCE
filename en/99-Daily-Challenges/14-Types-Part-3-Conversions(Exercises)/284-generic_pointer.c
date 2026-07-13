/* Objective: Practice implicit assignment to and from void* and understand the dereferencing limitation.
Instructions:
1. Declare a float variable temperature = 36.5f;.
2. Create a generic pointer void *generic_ptr = &temperature; (note that the compiler accepts this perfectly without complaints).
3. Try to print the value directly using printf("%f\n", *generic_ptr); just to see the error the compiler generates.
4. Fix the code by creating a specific pointer float *specific_ptr = generic_ptr; and use this new pointer to print the value 36.5. */

#include <stdio.h>

int main()
{

    float temperature = 36.5f;

    void *generic_ptr = &temperature;

    // printf("%f\n", *generic_ptr);

    float *specific_ptr = generic_ptr;

    printf("%.2f\n", *specific_ptr);

    return 0;

}