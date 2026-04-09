#include <stdio.h>

/* OBJECTIVE: Demonstrate how a 2-byte number can be reversed on disk.
 */

int main() {
    FILE *fp = fopen("v_test.bin", "wb");
    // 0x1234 has two bytes: 12 (Most Significant) and 34 (Least Significant)
    unsigned short v = 0x1234;

    if (fp == NULL) return 1;

    fwrite(&v, sizeof(v), 1, fp);
    fclose(fp);

    // If you open this file in a Hex editor and see "34 12",
    // congratulations: your machine is Little-Endian (it reverses the bytes)!
    printf("Written. Check the byte order with a Hex Viewer.\n");

    return 0;
}