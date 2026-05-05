#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Understand the difference between automatic memory (Stack) and
manual memory (Heap). The Stack is fast but limited; the Heap is vast but you are in charge. */

void example_function() {
    // AUTOMATIC memory (Stack)
    // This 'x' disappears as soon as the function reaches the '}' brace
    int x = 10;
}

int main() {
    // MANUAL memory (Heap)
    // The pointer 'p' lives on the stack, but the data it points to
    // on the Heap only dies when YOU decide.
    int *p = malloc(sizeof(int));

    free(p); // Important: returning the memory to the system
    return 0;
}