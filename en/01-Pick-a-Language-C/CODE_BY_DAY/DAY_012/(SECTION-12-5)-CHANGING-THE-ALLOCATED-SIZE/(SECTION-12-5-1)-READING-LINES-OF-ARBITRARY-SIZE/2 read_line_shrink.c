#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Read a line from a file (or stdin) with a dynamic buffer,
   and then use realloc to shrink the buffer to exactly the required size
   (plus the null terminator). Return the pointer to the already shrunk line. */

// Function that reads a line from any file (FILE*) and returns the line
// in a buffer of exactly the right size. The caller must free it.
char* read_line(FILE *file) {
    int capacity = 8;       // initial capacity
    int size = 0;           // number of characters read (without '\0')
    char *buffer;           // dynamic buffer
    int c;

    buffer = malloc(capacity * sizeof(char));
    if (buffer == NULL) return NULL;

    // Read until newline or EOF
    while ((c = fgetc(file)) != '\n' && c != EOF) {
        // If buffer is full (leave 1 byte for '\0'), double it
        if (size >= capacity - 1) {
            capacity *= 2;
            char *temp = realloc(buffer, capacity * sizeof(char));
            if (temp == NULL) {
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }
        buffer[size++] = (char)c;
    }

    // Check if anything was read (if EOF right at the beginning)
    if (c == EOF && size == 0) {
        free(buffer);
        return NULL;   // end of file with no characters
    }

    // --- SHRINK TO FIT ---
    // Now we know the buffer has 'size' useful characters.
    // Allocate the exact size + 1 byte for the null terminator.
    int ideal_size = size + 1;
    char *shrunk_buffer = realloc(buffer, ideal_size * sizeof(char));

    if (shrunk_buffer != NULL) {
        buffer = shrunk_buffer;   // shrunk successfully
    } // If it fails, keep the original (larger) buffer

    // Add the null terminator
    buffer[size] = '\0';
    return buffer;
}

int main() {
    FILE *file = fopen("input.txt", "r");

    // If the file does not exist, create an example
    if (file == NULL) {
        printf("File 'input.txt' not found. Creating example...\n");
        file = fopen("input.txt", "w");
        fprintf(file, "First example line.\nSecond much longer line, with several characters.\n");
        fclose(file);
        file = fopen("input.txt", "r");
        if (file == NULL) {
            fprintf(stderr, "Error creating/opening file.\n");
            return 1;
        }
    }

    char *line;
    int line_num = 1;
    while ((line = read_line(file)) != NULL) {
        printf("Line %d (%ld exact bytes): \"%s\"\n", line_num, strlen(line) + 1, line);
        free(line);
        line_num++;
    }

    fclose(file);
    return 0;
}