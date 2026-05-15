#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Read a line from the user (standard input) without knowing the size
   in advance. The buffer starts small and doubles in size whenever it becomes full,
   using realloc. Does NOT perform the final shrink. */

int main() {
    int capacity = 8;          // Initial buffer size (in bytes)
    int size = 0;              // Number of characters read so far
    char *buffer;              // Pointer to the dynamic buffer
    int character;             // Last character read

    // Allocate initial buffer
    buffer = malloc(capacity * sizeof(char));
    if (buffer == NULL) {
        fprintf(stderr, "Fatal error: could not allocate buffer.\n");
        return 1;
    }

    printf("Enter a line (press Enter to finish): ");

    // Read character by character until newline or EOF
    while ((character = getchar()) != '\n' && character != EOF) {
        // Check if we need to grow the buffer (leave 1 byte for '\0')
        if (size >= capacity - 1) {
            capacity *= 2;     // Double the capacity
            char *new_buffer = realloc(buffer, capacity * sizeof(char));

            if (new_buffer == NULL) {
                fprintf(stderr, "Error: failed to resize buffer.\n");
                free(buffer);
                return 1;
            }
            buffer = new_buffer;
            printf("(Buffer resized to %d bytes)\n", capacity);
        }

        // Store the character in the buffer and advance the counter
        buffer[size++] = (char)character;
    }

    // Add null terminator
    buffer[size] = '\0';

    printf("\nLine read: \"%s\"\n", buffer);
    printf("Line length: %d characters\n", size);
    printf("Final buffer capacity: %d bytes\n", capacity);

    free(buffer);
    buffer = NULL;
    return 0;
}