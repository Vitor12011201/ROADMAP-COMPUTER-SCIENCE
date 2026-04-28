#include <stdio.h>

/* OBJECTIVE: Demonstrate how the memory address changes depending on the data type.
   Adding 1 to an 'int' pointer jumps more bytes than adding 1 to a 'char' pointer. */

int main() {
    int n = 10;
    char c = 'A';

    int *ptr_int = &n;
    char *ptr_char = &c;

    printf("Initial INT address:  %p\n", (void*)ptr_int);
    // ptr_int + 1 will jump 4 bytes (size of an int)
    printf("INT address + 1:     %p\n\n", (void*)(ptr_int + 1));

    printf("Initial CHAR address: %p\n", (void*)ptr_char);
    // ptr_char + 1 will jump only 1 byte (size of a char)
    printf("CHAR address + 1:    %p\n", (void*)(ptr_char + 1));

    return 0;
}