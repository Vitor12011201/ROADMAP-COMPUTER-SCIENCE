#include <stdlib.h>

/* OBJECTIVE: Illustrate what happens when you allocate memory and "forget" to free it.
   The program keeps consuming RAM until the computer freezes or the process is killed. */

void leak_memory() {
    // We allocate space for 1000 integers
    int *data = malloc(1000 * sizeof(int));

    // We forget to use free(data) here!
    // When the function ends, we lose the 'data' pointer,
    // but the space remains occupied in RAM. This is a LEAK.
}

int main() {
    while(1) {
        leak_memory(); // If you run this, your RAM will run out fast!
    }
    return 0;
}