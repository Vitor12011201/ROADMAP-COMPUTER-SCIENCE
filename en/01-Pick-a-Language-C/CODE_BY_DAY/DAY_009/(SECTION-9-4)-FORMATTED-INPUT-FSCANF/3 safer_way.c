#include <stdio.h>

/* OBJECTIVE: Prevent the program from crashing if the name is too large (Buffer Overflow).
 * We use a number in the %s to specify the maximum length C can read.
 */

int main() {
    // Opening the file for reading with safety constraints
    FILE *fp = fopen("whales.txt", "r");
    char name[10]; // Small buffer on purpose to test limits
    float length;
    int mass;

    if (fp == NULL) return 1;

    // %9s means: "read at most 9 characters" (leaves 1 space for the null terminator \0)
    // This prevents a long name from breaking your program if the array is small.
    while (fscanf(fp, "%9s %f %d", name, &length, &mass) != EOF) {
        printf("Processed: %s\n", name);
    }

    fclose(fp);
    return 0;
}