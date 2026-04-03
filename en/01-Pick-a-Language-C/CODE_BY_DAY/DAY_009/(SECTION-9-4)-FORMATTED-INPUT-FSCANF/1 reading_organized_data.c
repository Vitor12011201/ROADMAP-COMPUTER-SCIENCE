#include <stdio.h>

/* OBJECTIVE: Use fscanf to read three different data types on the same line.
 * The file must follow the pattern: string float integer.
 */

int main() {
    // Opening the file for reading structured data
    FILE *fp = fopen("whales.txt", "r");
    char name[100];
    float length;
    int mass;

    if (fp == NULL) return 1;

    // We read a string (%s), a float (%f), and an int (%d) all at once.
    // fscanf ignores spaces and automatically jumps to the next data field.
    fscanf(fp, "%s %f %d", name, &length, &mass);

    printf("Name: %s | Length: %.1f | Mass: %d\n", name, length, mass);

    fclose(fp);
    return 0;
}