/* Objective: Practice opening files in binary mode ("wb" and "rb") and understand how to write an array of small integers (unsigned char) all at once, then read them individually.
1. In your code, create a file named data.bin in binary write mode ("wb").
2. Create an array of 5 numbers: unsigned char values[5] = {10, 20, 30, 40, 50};.
3. Use fwrite to write this entire array to the file.
Hint: fwrite(values, sizeof(unsigned char), 5, fp);
4. Close the file.
5. Reopen the data.bin file in binary read mode ("rb").
6. Use a while loop with fread to read one byte at a time and print its numeric value on the screen. */

#include <stdio.h>

int main() {

    FILE *fp;
    unsigned char values[5] = {10, 20, 30, 40, 50};
    unsigned char c;

    fp = fopen("data.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(values, sizeof(unsigned char), 5, fp);

    fclose(fp);

    fp = fopen("data.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fread(&c, sizeof(unsigned char), 1, fp) != 0) {
        printf("Byte read: %d\n", c);
    }

    fclose(fp);

    return 0;
}