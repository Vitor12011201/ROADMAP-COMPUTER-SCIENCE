#include <stdio.h>

/* OBJECTIVE: Serialize data: write field by field to avoid padding.
 */

struct Player {
    char id;
    int points;
};

int main() {
    FILE *fp = fopen("safe_save.bin", "wb");
    struct Player p1 = {'A', 500};

    if (fp == NULL) return 1;

    // Instead of fwrite(&p1...), we do it one by one:
    fwrite(&p1.id, sizeof(char), 1, fp);      // Writes the ID
    fwrite(&p1.points, sizeof(int), 1, fp);   // Writes the Points

    // Now the file is exactly the size of the data, with no hidden "holes"!
    fclose(fp);
    printf("Data serialized successfully!\n");

    return 0;
}