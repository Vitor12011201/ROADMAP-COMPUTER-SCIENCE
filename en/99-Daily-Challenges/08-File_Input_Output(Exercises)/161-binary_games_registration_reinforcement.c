/* Objective: Practice using a struct with mixed char and int types, reading them one by one using a while loop.
1. Create a struct Game with char title[30] and int year.
2. Create an array with 2 games (e.g., "Mario", 1985 and "Zelda", 1986).
3. Write them to games.bin.
4. Reopen and use while (fread(&temp, sizeof(struct Game), 1, fp) > 0) to list the games in the format: Game: %s (%d). */

#include <stdio.h>

struct Game
{
    char title[30];
    int year;
};

int main()
{
    struct Game games[2] = {
        {.title = "Mario", .year = 1985},
        {.title = "Zelda", .year = 1986}
    };
    struct Game temp;

    FILE *fp;

    fp = fopen("games.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(games, sizeof(struct Game), 2, fp);

    fclose(fp);

    fp = fopen("games.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fread(&temp, sizeof(struct Game), 1, fp) > 0)
    {
        printf("Game: %s (%d)\n", temp.title, temp.year);
    }

    fclose(fp);

    return 0;
}