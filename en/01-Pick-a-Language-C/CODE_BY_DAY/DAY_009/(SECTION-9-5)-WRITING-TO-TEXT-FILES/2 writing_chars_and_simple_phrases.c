#include <stdio.h>

/* OBJECTIVE: Use fputc for a single character and fputs for an entire string.
 * These functions are faster than fprintf when there are no variables to format.
 */

int main() {
    // Opening the file in write mode
    FILE *fp = fopen("output.txt", "w");

    if (fp == NULL) return 1;

    // fputc: Writes only ONE character (useful for loops or manual line breaks)
    fputc('A', fp);
    fputc('\n', fp);

    // fputs: Writes an entire string at once
    fputs("Line written with fputs!\n", fp);

    fclose(fp); // Flush buffer and close
    return 0;
}