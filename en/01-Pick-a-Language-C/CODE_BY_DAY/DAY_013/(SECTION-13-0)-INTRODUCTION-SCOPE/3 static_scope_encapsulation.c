#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use the 'static' keyword to limit the scope of global variables
   to a single file (encapsulation) and to create static variables inside
   functions that retain their value between calls (but are not global).
   Show how this helps control scope rigorously. */

// STATIC GLOBAL VARIABLE: visible ONLY within this file
// (cannot be accessed by other files even with 'extern')
static int internal_counter = 0;

// Function that uses a local static variable
int call_counter() {
    // 'static' makes this variable initialized only once
    // and retains its value between calls, but its SCOPE is only the function
    static int calls = 0;
    calls++;
    return calls;
}

void increment_global() {
    internal_counter++;
    printf("internal_counter is now = %d (visible only in this file)\n", internal_counter);
}

// Function that demonstrates dynamic allocation with pointer scope
int* create_local_counter(int initial_value) {
    // Allocates memory on the heap - the pointer is local, but the memory persists
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Allocation error\n");
        return NULL;
    }
    *p = initial_value;
    return p;   // returns the pointer; caller must free
}

int main() {
    printf("=== Static scope ===\n");

    // Calling the function with a local static variable
    for (int i = 0; i < 5; i++) {
        printf("call_counter() = %d\n", call_counter());
    }

    // The variable 'calls' inside the function is NOT accessible here
    // printf("%d\n", calls);  // ERROR! calls is not in main's scope.

    // Working with the static global variable
    increment_global();
    increment_global();

    // We can access internal_counter directly here because we are in the same file.
    // But 'static' prevents other files from seeing it. Here it's allowed:
    printf("Accessing internal_counter directly: %d\n", internal_counter);

    // Demonstration of dynamic allocation and scope
    int *ptr = create_local_counter(42);
    if (ptr != NULL) {
        printf("Dynamically allocated value: %d\n", *ptr);
        free(ptr);   // important: free the memory
        ptr = NULL;
    }

    // Example of nested block with static – not common, but shows scope
    {
        static int static_in_block = 0;   // initialized only once, but visible only within this block?
        // Actually, 'static' in block scope also retains the value,
        // but the variable can only be used inside this block.
        static_in_block++;
        printf("static_in_block = %d (retains value between block executions)\n", static_in_block);
    }
    // The block ended, but the static variable still exists in memory.
    // However, we cannot access it outside the block (the compiler forbids it).
    // Next time the block is executed, the value will persist.

    // Uncommenting the line below would cause a compilation error:
    // printf("%d\n", static_in_block);  // ERROR: out of scope

    return 0;
}