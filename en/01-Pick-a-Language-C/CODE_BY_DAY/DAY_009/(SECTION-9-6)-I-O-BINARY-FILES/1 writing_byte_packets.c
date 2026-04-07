#include <stdio.h>

/* OBJECTIVE: Write an array of raw bytes into a binary file.
 * We use "wb" (Write Binary). The file will not be readable in Notepad!
 */

int main() {
    FILE *fp;
    // unsigned char holds values from 0 to 255 (exactly 1 byte)
    unsigned char data[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb");

    if (fp == NULL) return 1;

    /* fwrite(data_pointer, size_of_each_item, number_of_items, file_pointer)
     * Here: take 'data', each item is the size of 1 char, there are 6 items, send to 'fp'.
     */
    fwrite(data, sizeof(unsigned char), 6, fp);

    fclose(fp);
    printf("Binary file written successfully!\n");

    return 0;
}