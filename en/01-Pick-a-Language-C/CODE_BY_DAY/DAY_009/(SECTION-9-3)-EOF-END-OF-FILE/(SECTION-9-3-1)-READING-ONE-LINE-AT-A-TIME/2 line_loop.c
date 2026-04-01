#include <stdio.h>

/* OBJECTIVE: Read all lines of a file until the end (NULL).
 * fgets returns NULL when there is nothing left to read, signaling the end.
 */

int main() {
    FILE *fp = fopen("quote.txt", "r");
    char buffer[1024];
    int counter = 0;

    if (fp == NULL) return 1;

    // While fgets can read something (not NULL)...
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        counter++;
        // Display the line number and the content read
        printf("Line %d: %s", counter, buffer);
    }

    fclose(fp);
    return 0;
}