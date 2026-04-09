#include <stdio.h>

/* OBJECTIVE: Write an entire struct directly into a binary file.
 */

struct Player {
    int id;
    int points;
};

int main() {
    // Opening the file in "wb" (Write Binary) mode
    FILE *fp = fopen("save.bin", "wb");
    struct Player p1 = {.id = 1, .points = 5000};

    if (fp == NULL) return 1;

    // We write the ENTIRE struct at once!
    // The size is the sizeof the struct, and we want to write 1 unit.
    fwrite(&p1, sizeof(struct Player), 1, fp);

    fclose(fp);
    printf("Player progress saved in binary!\n");

    return 0;
}