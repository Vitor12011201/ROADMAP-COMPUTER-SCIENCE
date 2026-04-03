#include <stdio.h>

/* OBJECTIVE: Read all lines from a data file using a loop.
 * fscanf returns EOF when it can no longer read data (end of file).
 */

int main() {
    // Opening the file to process the entire data list
    FILE *fp = fopen("whales.txt", "r");
    char name[100];
    float length;
    int mass;

    if (fp == NULL) return 1;

    // While fscanf can successfully read the complete set of data...
    // The loop continues until the End Of File (EOF) is reached.
    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("The whale %s weighs %d tons.\n", name, mass);
    }

    fclose(fp);
    return 0;
}