/* Objective: Practice reading and writing data that aren't just names, but "keys" and "values". This simulates how programs save settings (sound volume, screen brightness, etc.).
1. In your code, create a file named config.txt in write mode.
2. Write three settings, one on each line:
Brightness 80
Volume 50
Language 1 (Here, 1 could represent Portuguese)
3. Close the file.
4. Reopen the config.txt file in read mode.
5. Your program should read all settings and, if the Volume is greater than 70, it should print a warning: "Warning: Volume too high (%d)!".
6. Additionally, if the Brightness is lower than 30, print: "Warning: Brightness too low (%d)!".
7. At the end, display all settings read in the format: [KEY]: VALUE. */

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char key[50];
    int value = 0;

    fp = fopen("config.txt", "w");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Brightness 80\n");
    fprintf(fp, "Volume 50\n");
    fprintf(fp, "Language 1\n");

    fclose(fp);

    fp = fopen("config.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fscanf(fp, "%s %d", key, &value) != EOF) {

        if (strcmp(key, "Volume") == 0 && value > 70) {
            printf("WARNING: %s is too high [%d]!\n", key, value);
        }

        if (strcmp(key, "Brightness") == 0 && value < 30) {
            printf("ATTENTION: %s is too low [%d]!\n", key, value);
        }

        printf("[%s]: %d\n", key, value);
    }

    fclose(fp);

    return 0;
}