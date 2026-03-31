#include <stdio.h>

/* OBJECTIVE: Use the EOF signal to count how many characters exist in the file.
 */

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int c;
    int counter = 0;

    if (fp == NULL) return 1;

    // As long as the end-of-file signal is not reached...
    while ((c = fgetc(fp)) != EOF) {
        counter++; // Found a character? Add to the counter.
    }

    printf("The file has %d characters.\n", counter);

    fclose(fp);
    return 0;
}