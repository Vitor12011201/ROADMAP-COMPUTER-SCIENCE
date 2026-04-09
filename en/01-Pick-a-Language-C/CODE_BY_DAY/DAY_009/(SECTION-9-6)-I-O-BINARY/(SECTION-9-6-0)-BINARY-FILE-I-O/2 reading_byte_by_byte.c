#include <stdio.h>

/* OBJECTIVE: Read a binary file ("rb") and display its numerical values.
 * fread returns the number of items successfully read. If it returns 0, the file has ended.
 */

int main() {
    FILE *fp;
    unsigned char c;

    // Opening in "rb" (Read Binary) mode
    fp = fopen("output.bin", "rb");

    if (fp == NULL) return 1;

    // While fread can successfully read 1 item of 'char' size...
    while (fread(&c, sizeof(unsigned char), 1, fp) > 0) {
        printf("Value read: %d\n", c);
    }

    fclose(fp);
    return 0;
}