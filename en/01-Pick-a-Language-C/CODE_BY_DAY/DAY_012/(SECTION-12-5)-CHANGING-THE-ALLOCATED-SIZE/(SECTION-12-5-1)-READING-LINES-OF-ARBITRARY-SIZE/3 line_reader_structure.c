#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Implement a line reader that maintains a structure with the buffer,
   current capacity, and actual size, allowing reuse of the same buffer for multiple
   lines (allocation optimization). Uses realloc to grow and optionally shrink. */

typedef struct {
    char *data;         // pointer to the buffer
    int capacity;       // currently allocated bytes
    int size;           // used bytes (excluding '\0')
} DynamicLine;

// Initializes the structure with an initial size
void init_dynamic_line(DynamicLine *line, int initial_capacity) {
    line->data = malloc(initial_capacity * sizeof(char));
    if (line->data == NULL) {
        line->capacity = 0;
        line->size = 0;
        return;
    }
    line->capacity = initial_capacity;
    line->size = 0;
    line->data[0] = '\0';   // empty string for now
}

// Frees the internal memory of the structure
void free_dynamic_line(DynamicLine *line) {
    free(line->data);
    line->data = NULL;
    line->capacity = 0;
    line->size = 0;
}

// Reads the next line from the file using the internal buffer (reuses memory)
// Returns 1 if a line was read, 0 if EOF or error.
int read_reusable_line(FILE *file, DynamicLine *line) {
    // Reset the size (overwrites the previous line)
    line->size = 0;
    int c;

    while ((c = fgetc(file)) != '\n' && c != EOF) {
        // Check if we need to grow (leave 1 byte for '\0')
        if (line->size >= line->capacity - 1) {
            int new_capacity = (line->capacity == 0) ? 8 : line->capacity * 2;
            char *temp = realloc(line->data, new_capacity * sizeof(char));
            if (temp == NULL) {
                return 0;   // failure, keep old data
            }
            line->data = temp;
            line->capacity = new_capacity;
        }
        line->data[line->size++] = (char)c;
    }

    // If EOF reached without reading any character, there is no line
    if (c == EOF && line->size == 0) {
        return 0;
    }

    // Add null terminator
    line->data[line->size] = '\0';

    // Optional: shrink to exact size if there is too much slack
    // (only shrink if slack > 20% of capacity, for example)
    if (line->capacity > line->size + 1 &&
        line->capacity > 32) {  // avoid micro-shrinks
        int ideal_size = line->size + 1;
        char *temp = realloc(line->data, ideal_size * sizeof(char));
        if (temp != NULL) {
            line->data = temp;
            line->capacity = ideal_size;
        }
    }

    return 1;
}

int main() {
    FILE *file = fopen("phrases.txt", "r");

    // Create example file if it does not exist
    if (file == NULL) {
        printf("Creating example file 'phrases.txt'...\n");
        file = fopen("phrases.txt", "w");
        fprintf(file, "This is the first sentence.\n"
                      "A second sentence considerably longer just for testing.\n"
                      "Short\n"
                      "Final line with some text.\n");
        fclose(file);
        file = fopen("phrases.txt", "r");
        if (file == NULL) {
            fprintf(stderr, "Error opening file.\n");
            return 1;
        }
    }

    DynamicLine line;
    init_dynamic_line(&line, 16);   // initial capacity 16 bytes

    int counter = 0;
    while (read_reusable_line(file, &line)) {
        counter++;
        printf("Line %d (capacity=%d, size=%d): \"%s\"\n",
               counter, line.capacity, line.size, line.data);
    }

    free_dynamic_line(&line);
    fclose(file);
    return 0;
}