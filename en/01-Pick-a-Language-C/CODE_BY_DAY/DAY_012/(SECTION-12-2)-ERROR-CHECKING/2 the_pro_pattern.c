#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use assignment within the 'if' condition.
   This pattern is extremely common in C to keep the code concise. */

int main() {
    int *p;

    // Assigns the result of malloc to 'p' and IMMEDIATELY compares it with NULL
    if ((p = malloc(sizeof *p * 5)) == NULL) {
        perror("Allocation failed"); // perror prints the system's error cause
        exit(EXIT_FAILURE);
    }

    printf("Concise allocation performed successfully.\n");

    free(p);
    return 0;
}