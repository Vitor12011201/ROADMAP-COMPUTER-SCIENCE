#include <stdio.h>

/* OBJECTIVE: Understand how the fgets size limit protects the memory.
 * If the line in the file is larger than your array, fgets reads only what fits.
 */

int main() {
    FILE *fp = fopen("quote.txt", "r");
    char mini_buffer[10]; // Purposely small buffer

    if (fp == NULL) return 1;

    // fgets will never write more than 10 bytes (including the \0)
    // If the line is too large, it will truncate it and continue in the next call
    while (fgets(mini_buffer, sizeof(mini_buffer), fp) != NULL) {
        printf("[%s]", mini_buffer); // We use brackets to see where the cuts happen
    }

    fclose(fp);
    return 0;
}