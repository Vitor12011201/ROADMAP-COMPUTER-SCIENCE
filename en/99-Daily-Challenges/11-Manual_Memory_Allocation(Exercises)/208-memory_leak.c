/* OBJECTIVE: Understand the danger of "Memory Leak".
1. Create a function called 'create_data()' that allocates an array of 1000 integers using malloc, but does not use free.
2. In main, use a loop to call this function 100 times.
3. With each call, the pointer returned by the function is lost (overwritten), but the memory remains occupied in the system.
4. The Challenge: Fix the program so that it receives the pointer from the function, uses it, and then releases the memory correctly, ensuring the program finishes with "zero" waste.
*/

#include <stdio.h>
#include <stdlib.h>

int* create_data() {
    return malloc(1000 * sizeof(int));
}

int main() {

    int *data;

    for (int i = 0; i < 100; i++) {
        data = create_data();

        if (data == NULL) {
            printf("Memory Error\n");
            return 1;
        }

        free(data);

        data = NULL;
    }

    return 0;
}