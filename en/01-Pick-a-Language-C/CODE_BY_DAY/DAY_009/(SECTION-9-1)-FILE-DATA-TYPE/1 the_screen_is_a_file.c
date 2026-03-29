#include <stdio.h>

/* OBJECTIVE: Demonstrate that the screen (stdout) works like an open file.
 */

int main() {
    // Using printf is the same as using fprintf on the "file" stdout (screen)
    printf("Hello from a regular printf!\n");

    // stdout is built into C; no fopen is needed
    fprintf(stdout, "Hello from fprintf using the stdout stream!\n");

    return 0;
}