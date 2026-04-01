#include <stdio.h>

/* OBJECTIVE: Use fgets to read only the first line of a file.
 * fgets stops reading when it encounters a newline (\n) or reaches the buffer limit.
 */

int main() {
    FILE *fp = fopen("quote.txt", "r");
    char line[1024]; // Our "bucket" to hold the text

    if (fp == NULL) return 1;

    // We read up to 1024 bytes from file 'fp' and store them in 'line'
    if (fgets(line, sizeof(line), fp) != NULL) {
        printf("First line: %s", line);
    }

    fclose(fp);
    return 0;
}