/* Objective: Show why binary is so powerful for saving complex structures.
1. Create a struct:
struct Players {
int id;
float level;
unsigned char items;
};
2. Initialize a player: {1, 45.5, 3}.
3. Open a file named save.dat in "wb" mode.
4. Save the entire struct with a single line:
5. fwrite(&p1, sizeof(struct Players), 1, fp);
6. Close the file.
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
        fprintf(stderr, "Error: Could not open the file for writing\n");
        return 1;
    }

    fwrite(&player_1, sizeof(struct Players), 1, fp);

    fclose(fp);
    printf("Game state successfully saved to save.dat!\n");

    return 0;
}