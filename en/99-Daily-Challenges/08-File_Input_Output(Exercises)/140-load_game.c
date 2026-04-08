/* Objective: Read back the struct you saved in Exercise 139.
1. Open the save.dat file in "rb" mode.
2. Create an empty struct: struct Player p_read;.
3. Use fread to "suck" the data from the file into p_read.
4. Print the values (id, level, and items) to check if C "resurrected" the data correctly.
*/

#include <stdio.h>

struct Players
{
    int id;
    float level;
    unsigned char items;
};

int main()
{
    struct Players player_1 = {.id = 1, .level = 45.5, .items = 3};
    FILE *fp;

    fp = fopen("save.dat", "wb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error opening file for writing\n");
        return 1;
    }
    fwrite(&player_1, sizeof(struct Players), 1, fp);
    fclose(fp);

    fp = fopen("save.dat", "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: File does not exist\n");
        return 1;
    }

    struct Players p_read;

    while (fread(&p_read, sizeof(struct Players), 1, fp) > 0)
    {
        printf("ID: %d\nLEVEL: %.2f\nITEMS: %u\n", p_read.id, p_read.level, p_read.items);
    }

    fclose(fp);
    return 0;
}