#include <stdio.h>

/* OBJECTIVE: Create a function that accepts a pointer to ANY data type
   using void*, differentiating internal reading via a type flag. */

void print_data(void *ptr, char type) {
    printf("Received data: ");
    if (type == 'i') {
        // Step 1: Cast void* to int*
        int *p_int = ptr;
        // Step 2: Dereference to get the value
        printf("%d (Integer)\n", *p_int);
    }
    else if (type == 'f') {
        // We can cast and dereference in a single compact line:
        printf("%.2f (Float)\n", *(float *)ptr);
    }
}

int main() {
    int age = 28;
    float rate = 5.75f;

    printf("--- Polymorphic Printer via void* ---\n");

    // Passing addresses of completely different types to the same function
    print_data(&age, 'i');
    print_data(&rate, 'f');

    return 0;
}