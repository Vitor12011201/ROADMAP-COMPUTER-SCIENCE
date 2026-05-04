#include <stdio.h>

/* OBJECTIVE: Show that dereferencing a void* directly is forbidden.
   You must "inform" the compiler of the target type before accessing the value. */

int main() {
    int number = 42;
    void *generic = &number;

    // printf("%d", *generic); // ERROR: The compiler doesn't know how many bytes to read

    // Correct way: cast to (int*) before dereferencing
    int *specific = (int*)generic;

    printf("Recovered value: %d\n", *specific);
    // Or directly:
    printf("Direct value: %d\n", *(int*)generic);

    return 0;
}