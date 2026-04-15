/* Objective: Understand that binary mode writes data exactly as it exists in memory. We will write an int (which usually occupies 4 bytes) and see how the file behaves.
1. In your code, create a file named number.bin in "wb" mode.
2. Create a variable int n = 123456;.
3. Use fwrite to write this single variable.
Hint: fwrite(&n, sizeof(int), 1, fp);
4. Close and reopen it in "rb" mode.
5. Create a variable int read_val = 0; (empty).
6. Use fread to read the value from the file and store it into the read_val variable.
7. Print the value of read_val to see if C correctly recovered the number 123456. */

#include <stdio.h>

int main() {

    FILE *fp;
    int n = 123456;
    int read_val;

    fp = fopen("number.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(&n, sizeof(int), 1, fp);

    fclose(fp);

    fp = fopen("number.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fread(&read_val, sizeof(int), 1, fp) != 0) {
        printf("Integer value retrieved: %d\n", read_val);
    }

    fclose(fp);

    return 0;
}