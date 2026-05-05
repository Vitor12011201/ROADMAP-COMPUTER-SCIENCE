#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show the greatest advantage of manual allocation: creating something
inside a function and allowing the rest of the program to continue using that data. */

int* create_persistent_number() {
    // If we just created 'int n = 5', it would die here (Stack).
    // With malloc, the number '5' survives the end of this function (Heap).
    int *n = malloc(sizeof(int));
    *n = 5;
    return n; // We return the address for main to use
}

int main() {
    int *my_number = create_persistent_number();

    printf("The persistent number is: %d\n", *my_number);

    free(my_number); // Now that we are done using it, we clear the memory.
    return 0;
}